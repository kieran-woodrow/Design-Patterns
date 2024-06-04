#include "Predator.h"

Predator::Predator()
{

}

Predator::Predator(int HP, string type, int damage, string speciality)
{
    this->setHP(HP);
    this->sethuntingMethod(type);
    this->setDamage(damage);
    this->setSpeciality(speciality);
}

Predator::~Predator()
{

}

int Predator::getHP()
{
    return HP;
}

string Predator::gethuntingMethod()
{
    return huntingMethod;
}

int Predator::getDamage()
{
    return damage;
}

string Predator::getSpeciality()
{
    return Speciality;
}

void Predator::setHP(int HP)
{
    this->HP = HP;
}

void Predator::sethuntingMethod(string method)
{
    this->huntingMethod = method;
}

void Predator::setDamage(int damage)
{
    this->damage = damage;
}

void Predator::setSpeciality(string speciality)
{
    this->Speciality = speciality;
}

void Predator::hunt(Prey* p)
{
    while( this->HP > 0 && p->getHP() > 0) //while predator and prey are still alive
    {
        if( this->HP > 5)
            speciality();

        if( catchPrey(p) == true)
        {
            //cout<<"Prey caught"<<endl;

            if( getAttacked(p) == true)
                die();

            else
                attack(p);  
        }

        else
            HP = HP - 1;
    }

}

Backup* Predator :: createBackup()
{
    Backup* b = new Backup( HP,  damage,  huntingMethod,  Speciality);
    b->setState(S);
}

void Predator::setBackup(Backup* b)
{
    S = b->getState();
}