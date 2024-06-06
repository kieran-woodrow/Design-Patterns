#include "CheetahFactory.h"

Predator* CheetahFactory::createPredator(string huntingMethod, string speciality)
{
    Predator* p = new Cheetah(huntingMethod, speciality);

    p->setHP(11);
    p->setDamage(4);
    return p;
}