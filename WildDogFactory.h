#if !defined(WildDogFactory_H)
#define WildDogFactory_H

#include <iostream>
#include "WildDog.h"
#include "PredatorFactory.h"

using namespace std;
class WildDogFactory : PredatorFactory
{
    
public:
    WildDogFactory();   
    ~WildDogFactory();
    Predator* createPredator(string huntingMethod, string speciality);
};

#endif // WildDogFactory_H