//#pragma once

#ifndef ElternKlasse_H
#define ElternKlasse_H
class ElternKlasse
{
	private:
		std::string meinText;
	protected:
	//public:
		int alter;
		void eineFunktion();
	public:
		float pubVar;
};

class KindKlasse : public ElternKlasse
{
	public:
		void Ausgabe();
};

/*
	private 	-> Keine Vererbung
	protected	-> Vererbt
	public		-> Jeder kann zugreifen
*/

#endif
