#include "WildDogFactory.h"

Predator* WildDogFactory::createPredator(string huntingMethod, string speciality)
{
    Predator* p = new WildDog( huntingMethod,speciality );

    p->setHP(6);
    p->setDamage(3);
    return p;
}