#include "WildDog.h"


WildDog::WildDog()
{

}

WildDog::WildDog(int HP, string huntingMethod, int damage, string speciality) : Predator( HP, huntingMethod,  damage,  speciality)
{
    // this->setHP(HP);
    // this->sethuntingMethod(huntingMethod);
    // this->setDamage(damage);
    // this->setSpeciality(speciality);
}

WildDog::WildDog(string huntingMethod, string speciality)
{
    this->sethuntingMethod(huntingMethod);
    this->setSpeciality(speciality);
}

WildDog::~WildDog()
{
    
}

bool WildDog::catchPrey(Prey* p)
{
    p->run();
    cout<<"The wild dog howls as it measures up the " << p->getType() << "."<<endl;
}

bool WildDog::getAttacked(Prey* p)
{
    cout<<"The " << p->getType() << " rams into the wild dog removing " << p->getDamage() << " health points."<<endl;

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

bool WildDog::attack(Prey* p)
{
    cout<<"The wild dog’s "<< this->gethuntingMethod()<<" pays off leaving it’s "<<p->getType()<<" with "<< p->getDamage()<<"health points less."<<endl;

    bool killed = false;
    int preyHP = p->takeDamage( this->getDamage() );
    p->setHP(preyHP);

    if( preyHP <= 0)
        killed = true;

    return killed;
    
}

void WildDog::die()
{
    cout<<"No more hunting for this old dog."<<endl;
}

void WildDog::speciality()
{
    cout<<"The wild dog plays dead before using  "<<this->getSpeciality()<<"."<<endl;
    
    if( this->getHP() < 5 )
    {
        int specialAttackValue = this->getDamage() + ( (this->getDamage() * 10) / 100);
        this->setDamage(specialAttackValue);
    }
}