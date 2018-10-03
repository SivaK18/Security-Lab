#include <stdio.h>
#include <math.h>
 
int gcd(int a,int b)
{
if(a==b)return b;
if(a==0)return b;
return gcd(b%a,a);
}

int main()
{
 
int p,q,m,e;
 
printf("enter prime values for p and q \n");
scanf("%d%d",&p,&q);
 
int n=p*q;
 
int phiofn=(p-1)*(q-1);
 
printf("enter e such that 1 <e < phiofn \n");
scanf("%d",&e);
 
while(e<phiofn)
{
        if(gcd(e,phiofn)==1)break;
        else e++;
}
 
int einv,i;

for(i=0;i<phiofn;i++)
{
        if(((e*i)%phiofn)== 1)
        {
        einv=i;
        break;
        }
}
 
int d=einv%phiofn;
printf("value of d is %d\n",d);
int msg;
printf("enter the message \n");
scanf("%d",&msg);
 
int encryption= pow(msg,e);
encryption=encryption%n;
printf("encrypted data is %d",encryption);
 
 
int decryption= pow(encryption,d);
decryption=decryption%n;
printf("decrypted data is %d",decryption);
return 0;
}