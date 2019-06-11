// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 01.06.01 der C++ Programmierung
// * Projekt einer Klasse erstellen

#ifndef _PUNKT_H_
#define _PUNKT_H_
class Punkt
{
    private:
		int x;
		int y;
		int z;
    public:
		Punkt();
		~Punkt();
		void setPunkt(int _x, int _y, int _z);
		int getXKoordinate();
		int getYKoordinate();
		int getZKoordinate();
};
#endif
