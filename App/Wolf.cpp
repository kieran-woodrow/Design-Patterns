#include "Wolf.h"

Wolf::Wolf()
{

}

Wolf::Wolf(int HP, string huntingMethod, int damage, string speciality) : Predator( HP, huntingMethod,  damage,  speciality)
{
    // this->setHP(HP);
    // this->sethuntingMethod(huntingMethod);
    // this->setDamage(damage);
    // this->setSpeciality(speciality);
}

Wolf::Wolf(string huntingMethod, string speciality)
{
    this->sethuntingMethod(huntingMethod);
    this->setSpeciality(speciality);
}

Wolf::~Wolf()
{
    
}

bool Wolf::catchPrey(Prey* p)
{
    p->run();
    cout<<"The wolf sneaks up to the " << p->getType() << "."<<endl;
}

bool Wolf::getAttacked(Prey* p)
{
    cout<<"The " << p->getType() << " spots the wolf, jumps onto it’s back imposing " << p->getDamage() << " damage."<<endl;

    bool killed = false;

    if( catchPrey(p) == true )
    {
        int number = p->fight();

            if( number == 0 )
            {
                //do nothing
            }

            if( number > 0)
            {
                int damageTopredator = p->getDamage();
                int newHPOfPredator = this->getHP() - damageTopredator;
                this->setDamage(damageTopredator);
            }

        int checkHP = this->getHP();

        if( checkHP <= 0)
            killed = true;

        return killed;
    }
}

bool Wolf::attack(Prey* p)
{
    cout<<"The wolf’s "<< this->gethuntingMethod()<<" caused "<<p->getDamage()<<" damage to the "<< p->getType()<<"."<<endl;

    bool killed = false;
    int preyHP = p->takeDamage( this->getDamage() );
    p->setHP(preyHP);

    if( preyHP <= 0)
        killed = true;

    return killed;
}

void Wolf::die()
{
    cout<<"Why so afraid of the big bad wolf?"<<endl;
}

void Wolf::speciality()
{
    cout<<"The wolf cunningly uses  "<<this->getSpeciality()<<"."<<endl;

    if( this->getHP() < 5 )
    {
        int specialAttackValue = this->getDamage() + ( (this->getDamage() * 10) / 100);
        this->setDamage(specialAttackValue);
    }
}