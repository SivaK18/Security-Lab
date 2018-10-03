<?php
$username = $_POST["username"];
$password = $_POST["password"];
$servername = "localhost";
$conn = new mysqli($servername,"root","","sukin");
if($conn->connect_error)
{
die("connection failed:");
}
$sql = "select * from login where username='$username' and password='$password'";
$result = $conn->query($sql);
if($result->num_rows>0)
{
while($row=$result->fetch_assoc())
	{
		echo "Username: ". $row["username"]."Password: ". $row["password"]."<br>" ;
	}
}
?>