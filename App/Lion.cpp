#include "Lion.h"

Lion::Lion()
{

}

Lion::Lion(int HP, string huntingMethod, int damage, string speciality) : Predator( HP, huntingMethod,  damage,  speciality)
{
    // this->setHP(HP);
    // this->sethuntingMethod(huntingMethod);
    // this->setDamage(damage);
    // this->setSpeciality(speciality);
}

Lion::Lion(string huntingMethod, string speciality)
{
    this->sethuntingMethod(huntingMethod);
    this->setSpeciality(speciality);
}

Lion::~Lion()
{

}

bool Lion::catchPrey(Prey* p)
{
    p->run();
    cout<<"The lion pounces into action to catch the " << p->getType() << "."<<endl;
}

bool Lion::getAttacked(Prey* p)
{
    cout<<"The " << p->getType() << " stands on the lions tail inflicting " << p->getDamage() << " damage!"<<endl;
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

bool Lion::attack(Prey* p)
{
    cout<<"The lion uses "<< this->gethuntingMethod() <<" to inflict " << this->getDamage() <<" damage on the "<< p->getType()<<"."<<endl;

    bool killed = false;
    int preyHP = p->takeDamage( this->getDamage() );
    p->setHP(preyHP);

    if( preyHP <= 0)
        killed = true;

    return killed;
}

void Lion::die()
{
    cout<<"Long lived the King."<<endl;
}

void Lion::speciality()
{
    cout<<"The injured lion uses "<<this->getSpeciality()<<"."<<endl;
    
    if( this->getHP() < 5 )
    {
        int specialAttackValue = this->getDamage() + ( (this->getDamage() * 10) / 100);
        this->setDamage(specialAttackValue);
    }
}