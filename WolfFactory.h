#if !defined(WolfFactory_H)
#define WolfFactory_H

#include <iostream>
#include "Wolf.h"
#include "PredatorFactory.h"

using namespace std;
class WolfFactory : PredatorFactory
{
    public:
        WolfFactory();
        ~WolfFactory();
        Predator* createPredator(string huntingMethod, string speciality);
};

#endif // WolfFactory_H