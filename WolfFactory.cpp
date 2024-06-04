#include "WolfFactory.h"

Predator* WolfFactory::createPredator(string huntingMethod, string speciality)
{
    Predator* p = new Wolf(huntingMethod, speciality );

    p->setHP(8);
    p->setDamage(2);
    return p;
}