import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.*;
import java.io.FileInputStream;
import java.io.IOException;
import java.security.MessageDigest;

public class SHA1 {


public static void main(String[] args) throws NoSuchAlgorithmException,IOException 
{
String s;
System.out.println("Enter the input String");
Scanner sc=new Scanner(System.in);
s=sc.next();
System.out.println(sha1(s));
System.out.println("for a file");
System.out.println(verifyChecksum("Z:/Sha1.java"));
}

static String sha1(String input) throws NoSuchAlgorithmException 
{
MessageDigestmDigest = MessageDigest.getInstance("SHA1");
byte[] result = mDigest.digest(input.getBytes());
StringBuffersb = new StringBuffer();
for (inti = 0; i<result.length; i++) 
{
sb.append(Integer.toString((result[i] & 0xff) + 0x100, 16).substring(1));
}
returnsb.toString();
}

public static String verifyChecksum(String file) throws NoSuchAlgorithmException,IOException
{
MessageDigest sha1 = MessageDigest.getInstance("SHA1");
FileInputStreamfis = new FileInputStream(file);
byte[] data = new byte[1024];
int read = 0; 
while ((read = fis.read(data)) != -1) 
{
sha1.update(data, 0, read);
};
byte[] hashBytes = sha1.digest();
StringBuffersb = new StringBuffer();
for (inti = 0; i<hashBytes.length; i++)
{
sb.append(Integer.toString((hashBytes[i] & 0xff) + 0x100, 16).substring(1));
}
String fileHash = sb.toString();
returnfileHash;
}
}