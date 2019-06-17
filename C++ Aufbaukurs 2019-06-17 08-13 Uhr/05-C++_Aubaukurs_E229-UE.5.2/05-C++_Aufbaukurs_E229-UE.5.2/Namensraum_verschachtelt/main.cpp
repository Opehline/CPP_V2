
#include "Hund.hpp"
#include "Katze.hpp"

	using namespace Hund;
	using namespace Katze;
	using namespace Hund::HundUndKatze;
/*	using namespace Katze::KatzeUndHund;
*/

int main(int argc, char** argv)
{
    #ifdef DEBUG
    std::cout << argc << std::endl;
    std::cout << argv << std::endl;
    #endif
	#if 1
	//IchLebe();
	//wasAnderes();
	Hund::IchLebe(10.6);
	// * Wenn eine Klasse einem Namensraum zugrundeliegt
	Hund::HundUndKatze::DasLeben Fifo;
	#ifdef DEBUG
	std::cout << "this> " << &Fifo << std::endl;
	#endif
	Fifo.NichtImmerSchoen();

	// * Ein und auskommentieren:
	Katze::KatzeUndHund::NichtImmerSchoen();
	#endif

    return 0;
}
