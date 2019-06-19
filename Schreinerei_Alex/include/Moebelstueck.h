#ifndef MOEBELSTUECK_H
#define MOEBELSTUECK_H


class Moebelstueck
{
    public:
        Moebelstueck();
        virtual ~Moebelstueck();

    protected:

    private:
        int naegel;
        int bretter;
        bool istfertig;
};

#endif // MOEBELSTUECK_H
