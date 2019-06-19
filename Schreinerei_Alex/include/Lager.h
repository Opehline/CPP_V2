#include <map>            // std::map
#include <iterator>
#include <string>

#ifndef LAGER_H
#define LAGER_H


class Lager
{
    public:
        Lager();
        virtual ~Lager();

    protected:

    private:
        int bretter;
        int naegel;
        std::map<std::string, float> preise;
};

#endif // LAGER_H
