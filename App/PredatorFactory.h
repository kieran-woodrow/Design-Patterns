#if !defined(PredatorFactory_H)
#define PredatorFactory_H


#include <iostream>
#include "Predator.h"

using namespace std;
class PredatorFactory 
{
    
public:
    PredatorFactory() {};
    virtual ~PredatorFactory() {};
    virtual Predator* createPredator ( string , string ) = 0;
};

#endif // PredatorFactory_H