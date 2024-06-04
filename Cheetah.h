#if !defined(Cheetah_H)
#define Cheetah_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Predator.h"

using namespace std;
class Cheetah : public Predator
{
    public:
        Cheetah();
        Cheetah(int HP, string huntingMethod, int damage, string speciality);
        Cheetah(string huntingMethod, string speciality);
        ~Cheetah();
        bool catchPrey(Prey* p);
        bool getAttacked(Prey* p);
        bool attack(Prey* p);
        void die();
        void speciality();
};

#endif // Cheetah_H