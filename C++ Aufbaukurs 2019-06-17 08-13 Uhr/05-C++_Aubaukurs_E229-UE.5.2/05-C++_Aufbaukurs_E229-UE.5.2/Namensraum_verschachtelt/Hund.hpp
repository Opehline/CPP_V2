
#include <iostream>

#define DEBUG
#ifndef HUND_H
#define HUND_H
namespace Hund
{
	void IchLebe(float);
	extern int was;

    namespace HundUndKatze
    {
        class DasLeben;
    }
}


class Hund::HundUndKatze::DasLeben
{
    public:
        int hallo;
        void NichtImmerSchoen();
};
#endif
