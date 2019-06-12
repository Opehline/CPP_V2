// Gisela Neira
// C++ Aufbaukurs E229
// * Ausnahmefallbehandlug 03.01.06 der C++ Programmierung
// * Ausgabe der Datei und Line wo Fehler entstanden ist

#include <stdexcept>
#include <iostream>
#include <sstream>

#undef FUNKTION

#ifdef FUNKTION
std::string zeile_info(std::string const& error, char const* datei, long zeile)
{
    std::stringstream Ausgabe;
    Ausgabe << "EXCEPTION: " << error << " in \"" << datei << "\",zeile:" << zeile;
    return Ausgabe.str();
}
#endif // 0

class Fehlerausgabe
{
    public:
        char const* datei;
        long zeile;

}fehlerausgabe;

int main()
{
    try
    {
        #ifdef FUNKTION
        throw std::domain_error(zeile_info("AUSNAHME IST ENTSTANDEN",__FILE__,__LINE__));
        #else
        fehlerausgabe.datei=__FILE__;
        fehlerausgabe.zeile=(__LINE__+1);
        throw fehlerausgabe;
        #endif // FUNKTION
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() <<'\n';
    }
    catch(Fehlerausgabe fehler)
    {
        std::cerr << "Datei: " << fehlerausgabe.datei << " Zeile: " << fehlerausgabe.zeile << std::endl;
    }
}
