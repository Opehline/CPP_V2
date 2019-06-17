#include "Hund.hpp"

int Hund::was;

void Hund::IchLebe(float alter)
{
    #ifdef DEBUG
    std::cout << "Wie viele babies habe ich?> ";
    std::cin >> Hund::was;
    std::cout << "Ich habe " << Hund::was << " Hundebabies...!"
              << std::endl;
    #endif // DEBUG

    std::cout << "ich bin " << alter << " Jahre alt." << std::endl;
	std::cout << "Ich atme...!" << std::endl;
	std::cout << "Ich esse...!" << std::endl;
	std::cout << "Ich schlafe...!" << std::endl;
	std::cout << "Ich belle...!" << std::endl;
	std::cout << "Und vieles mehr...!" << std::endl;
}
void Hund::HundUndKatze::DasLeben::NichtImmerSchoen()
{
	std::cout
		<< "Das Leben waere super "
		<< "geabe es diese Katzen"
		<< "nicht...!" << std::endl;
}
