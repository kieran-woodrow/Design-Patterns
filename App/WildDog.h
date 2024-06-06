#if !defined(WildDog_H)
#define WildDog_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Predator.h"

using namespace std;
class WildDog : public Predator
{
public:
    WildDog();
    WildDog(int HP, string type, int damage, string speciality);
    WildDog(string huntingMethod, string speciality);
    ~WildDog();
    bool catchPrey(Prey* p);
    bool getAttacked(Prey* p);
    bool attack(Prey* p);
    void die();
    void speciality();
};

#endif // WildDog_H