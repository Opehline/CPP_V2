#include <iostream>

#ifndef _HELDEN_H_
#define _HELDEN_H_
enum Typ
{
    IST_RITTER, IST_ZAUBERER, IST_FEE    
};

class Held
{
    protected: 
		short int lebenskraft;
		std::string typWaffe;
		float power;
		std::string name;

    public:
		Held();
	
		void setAll(short int _lebenskraft, std::string _typWaffe, float _power, std::string _name);
	
		short int getLebenskraft();
		std::string getTypWaffe();
		float getPower();
		std::string getName();
};

class Ritter : public Held
{
    private:
		std::string kampfart;
    public:
		Ritter();
		void setRitter(std::string _kampfart);
		std::string getRitter();
};

class Zauberer : public Held
{
    private:
		std::string magieart;
    public:
		Zauberer();
		void setZauberer(std::string _magieart);
		std::string getZauberer();


};
class Fee : public Zauberer
{
    private:
		std::string magieartAlternativ;
    public:
		Fee();
		void setFee(std::string _magieartAlternativ);
		std::string getFee();
};
#endif
