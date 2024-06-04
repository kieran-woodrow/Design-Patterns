#if !defined(CheetahFactory_H)
#define CheetahFactory_H

#include <iostream>
#include "Cheetah.h"
#include "PredatorFactory.h"

using namespace std;
class CheetahFactory : PredatorFactory
{
    
public:
    CheetahFactory();
    ~CheetahFactory();
    Predator* createPredator(string huntingMethod, string speciality);
};

#endif // CheetahFactory_H