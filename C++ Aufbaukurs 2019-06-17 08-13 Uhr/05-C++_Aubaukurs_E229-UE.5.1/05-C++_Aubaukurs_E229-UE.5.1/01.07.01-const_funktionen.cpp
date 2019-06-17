// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 01.07.01 der C++ Programmierung
// * const-Funktionen: koennen in C++ nur weitere
// * const-Funktionen aufrufen
// * Daraus folgt: hoeherer Sicherheitsgrad als in C

#include <iostream>
#include <string>

class Vater
{
    private:
	char Geschlecht; 		// * m=maenlich, w=weiblich, u=undefiniert
	int Alter;
	std::string Name;

	void funktion_arbeiten()
	{
	    std::cout << "Ich gehe arbeiten... Buhhhh" << std::endl;
	}

   	protected:
		void funktion_sprachenvater() const;
		void funktion_Geschlecht(char Geschlecht) const;
		void funktion_Name(std::string Name) const;
		int funktion_Alter(int Alter) /*const*/;


   	public:
	Vater(){};

	void funktion_DatenAusgeben(char _geschlecht, int _alter, std::string _name) const;
};

class Mutter
{
    protected:
		int MengeBruestchen;
		void funktion_sprachenmutter();


    public:
		Mutter(){};
};

class Tochter : public Vater, public Mutter
{
    private:

    protected:

    public:
		Tochter();
};

Tochter::Tochter()
{
	funktion_sprachenmutter();
	funktion_sprachenvater();
};


void Mutter::funktion_sprachenmutter()
{
	std::cout << "Ich kann russisch." << std::endl;
}

void Vater::funktion_sprachenvater() const
{
	std::cout << "Ich kann englisch." << std::endl;
	std::cout << "Ich kann deutsch." << std::endl;
	std::cout << "Ich kann italienisch." << std::endl;
}
void Vater::funktion_Geschlecht(char Geschlecht) const
{
	std::cout << "Geschlecht: " << Geschlecht << std::endl;
}
void Vater::funktion_Name(std::string Name) const
{
	std::cout << "Name: " << Name << std::endl;
}
int Vater::funktion_Alter(int Alter) /*const*/
{
	std::cout << "Alter: " << Alter << std::endl;
	return Alter;
}

void Vater::funktion_DatenAusgeben(char _geschlecht, int _alter, std::string _name) const
{
	funktion_sprachenvater();
	funktion_Geschlecht(_geschlecht);
	funktion_Name(_name);
	funktion_Alter(_alter);
	std::cout << "Ich werde in drei Jahren " << Alter+3 << " Jahre alt sein." << std::endl;
}


int main(int argc, char **argv){

    Tochter momi;
	Vater vater;
	vater.funktion_DatenAusgeben('m', 56, "Holzhauer");

return 0;
}
