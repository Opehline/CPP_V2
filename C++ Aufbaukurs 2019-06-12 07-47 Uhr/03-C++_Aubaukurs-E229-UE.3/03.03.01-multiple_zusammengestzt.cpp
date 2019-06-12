// Gisela Neira
// C++ Aufbaukurs E229
// * Ausnahmefallbehandlug 03.03.01 der C++ Programmierung
// * try-catch-Anweisungen erweitert

#include <iostream>
#include <exception> //Bibliothek muss ergänzt werden

using namespace std;

void wertEingeben();

void alterEingeben()
{
	//...
	//...
	#if 0
	try
	{
		//wertEingeben();
		cout << "Alter eingeben: \n";
		int age = 0;
		cin>>age;
		if(age>150 || age<0)
		{
			throw(age);
		}
		else if(!age)
		{
			throw('a');
		}
	}
	catch(int val)
	{cout <<"\n---Int Ausnahmefall ist geschehn.----";}
	catch(char val)
	{cout <<"\n---Char Ausnahmefall ist geschehn.----";}
	catch(...)
	{cout <<"\n---Nicht definierter Ausnahmefall ist geschehn.----";}
    #endif
    wertEingeben();

}

void wertEingeben()
{
	int val;

	cout <<"\nWert eingeben: ";
	cin>>val;
	//...
	//
	//....
	if(val<0)
	{
		val=12;
		throw(val);
	}
}

int main()
{
	alterEingeben();

	try
	{
		wertEingeben();
	}
	catch(const int value)
	{
		//value=100;
		cerr <<"\n----Wiederholter Ausnahmefall ist geschehn.----" << value;
	}

return 0;
}
