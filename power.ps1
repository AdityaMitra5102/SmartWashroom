$port =new-Object System.IO.Ports.SerialPort COM3,9600,None,8,one;
$port.close();
$port.open();
while ($port.IsOpen){
$text=$port.ReadLine();


$text>'file.txt'
echo $text
if($text.contains("1"))
{
Start-Process scan.bat
}
}