#if !defined(Backup_H)
#define Backup_H

#include <iostream>
#include "State.h"

using namespace std;
class Backup 
{
private:
   State* State;
   friend class Prey;
   friend class Predator;

public:
   Backup(int HP, int damage, string type );
   Backup(int HP, int damage, string huntingMethod, string Speciality);
   ~Backup();
   State* getState();
   void setState(State* s);

};

#endif // Backup_H