// Gisela Neira
// C++ Basics E228
// * Programm 05.05.01 fuer Fortgeschrittene 
// * 04.05.01 der C/C++ Programmierung
// * Initialisierung eines Arrays mit null-Werten


#include <iostream>
#include <string.h>

#if 0
double mean(int n, int arr[]){
	int sum = 0;
	for(int i = 0; i < n; i++){
    	sum += arr[i];
    }
    return (double)sum / n;
}
#endif


#if 0
double mean(int arr[]){
	int sum = 0;
	int n=sizeof(arr)/sizeof(int);

	for(int i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
    	sum += arr[i];
    }
    return (double)sum / n;
	//return (double)sum / sizeof(arr)/sizeof(int);
}
#endif

// * while-Schleife
#if 1
double mean(int *arr){
	int sum = 0;
	int i=0;

	while(arr[i]!=0x00)
	{	
    	sum += arr[i];
		std::cout << "Zwischensumme " << i 
				  << " > " << sum << std::endl;
		i++;
    }
	std::cout << "Durchschnittsalter " << " > " 
	 		  << (double)sum/i << "\n" << std::endl;
	return (double)sum/i;
}
#endif


bool checkInput(char str[]){
	bool ok = true;
	for(int i=0; i < strlen(str); i++){
    	if (!((int)str[i] > 47 && (int)str[i] < 58 )){
             ok = false;
             break;
        }
    }
    return ok;
}

int main(int argc, char **argv){

	int numberOfPersons = (argv[1]!=0x00)?
						  (checkInput(argv[1])?
						  atoi(argv[1]):0):0;

	if(numberOfPersons == 0){
		std::cerr << "Fehler bei Parameteruebergabe,"
				  << "Programm wurde abgebrochen!" 
				  << std::endl;	
		return 0;
	}
		
	#if 1
    int ageOfPerson[numberOfPersons-1]={0};
	#endif

	#if 0	// * Notwendig fuer die while-Schleife: 
	        // * Initialisierung des Arrays mit null-Werten
	for(int i=0; i<=numberOfPersons; i++)
	{
		ageOfPerson[i] = 0;
	}
	#endif

    char age[4];

	
    for(int i = 0; i < numberOfPersons; i++){
    	while(true){
    		std::cout << "Wie alt ist "<< i+1 <<". Person?" 
				      << std::endl;
    		std::cin >> age;
			std::cin.clear(); 		    		
    		if( checkInput(age) && strlen(age) < 4){
    			ageOfPerson[i] = atoi(age);
    			break;
    		}else{
    			std::cerr << "Fehler bei der Eingabe,"
						  << " bitte nochmal!" << std::endl;	
    		}
    	}
    }
    
    std::cout << "Das Durchschnittsalter der " 
			  << numberOfPersons 
			  << " Personen ist " << mean(ageOfPerson) 
			  << " Jahre" << std::endl;

return 0;
}
