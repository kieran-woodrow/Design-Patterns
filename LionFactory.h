#if !defined(LionFactory_H)
#define LionFactory_H

#include <iostream>
#include "Lion.h"
#include "PredatorFactory.h"

using namespace std;
class LionFactory : PredatorFactory
{
    
public:
    LionFactory();
    ~LionFactory();
    Predator* createPredator(string huntingMethod, string speciality);
};

#endif // LionFactory_H