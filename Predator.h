#if !defined(Predator_H)
#define Predator_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Prey.h"
#include "State.h"
#include "Backup.h"

using namespace std;
class Predator
{
private:
    int HP;
    string huntingMethod;
    string Speciality;
    int damage;
    State* S;

public:
    Predator();
    Predator(int HP, string type, int damage, string speciality);
    ~Predator();
    int getHP();
    void setHP(int HP);
    string gethuntingMethod();
    void sethuntingMethod(string method);
    int getDamage();
    void setDamage(int damage);
    string getSpeciality();
    void setSpeciality(string speciality);
    void hunt(Prey* p);
 
    virtual bool catchPrey(Prey* p) = 0;
    virtual bool getAttacked(Prey* p) = 0;
    virtual bool attack(Prey* p) = 0;
    virtual void die() = 0;
    virtual void speciality() = 0;

    Backup* createBackup();
    void setBackup(Backup* b);

};

#endif // Prey_H