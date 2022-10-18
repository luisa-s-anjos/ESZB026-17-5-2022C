 # include < iostream > 
 # include < fstream > 
 # include < string > 
 # include < unistd .h > 
 using namespace std ; 
 

 # define GPIO_SYSFS "/ sys / class / gpio /" 
 
 void writeGPIO ( string path , string filename , string value ){ 
	 fstream fs ; 
 	fs . open (( path + filename ). c_str () , fstream :: out ); 
 	fs << value ; 
 	fs . close () ; 
 } 
int i
for (i=0; i<6;i++)
{
 	# define GPIO_NUMBER "20" 
 	# define GPIO_PATH "/sys/ class / gpio / gpio20 /" 
	writeGPIO ( string ( GPIO_SYSFS ) , " export ", GPIO_NUMBER );
	usleep (100000) ; 
	writeGPIO ( string ( GPIO_PATH ) , " direction ", " out ");
	writeGPIO ( string ( GPIO_PATH ) , " value ", "1");
	sleep(2);
	writeGPIO ( string ( GPIO_PATH ) , " value ", "0"); 
	writeGPIO ( string ( GPIO_SYSFS ) , " unexport ", GPIO_NUMBER );

 	# define GPIO_NUMBER "21" 
 	# define GPIO_PATH "/sys/ class / gpio / gpio21 /" 
	writeGPIO ( string ( GPIO_SYSFS ) , " export ", GPIO_NUMBER );
	usleep (100000) ; 
	writeGPIO ( string ( GPIO_PATH ) , " direction ", " out ");
	writeGPIO ( string ( GPIO_PATH ) , " value ", "1");
	sleep(1);
	writeGPIO ( string ( GPIO_PATH ) , " value ", "0"); 
	writeGPIO ( string ( GPIO_SYSFS ) , " unexport ", GPIO_NUMBER );

 	# define GPIO_NUMBER "16" 
 	# define GPIO_PATH "/sys/ class / gpio / gpio16 /" 
	writeGPIO ( string ( GPIO_SYSFS ) , " export ", GPIO_NUMBER );
	usleep (100000) ; 
	writeGPIO ( string ( GPIO_PATH ) , " direction ", " out ");
	writeGPIO ( string ( GPIO_PATH ) , " value ", "1");
	sleep(1);
	writeGPIO ( string ( GPIO_PATH ) , " value ", "0"); 
	writeGPIO ( string ( GPIO_SYSFS ) , " unexport ", GPIO_NUMBER );
}
	




