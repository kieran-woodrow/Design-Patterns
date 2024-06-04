#include "LionFactory.h"

Predator* LionFactory::createPredator(string huntingMethod, string speciality)
{
    Predator* p = new Lion(huntingMethod, speciality);

    p->setHP(13);
    p->setDamage(5);
 
    return p;
}