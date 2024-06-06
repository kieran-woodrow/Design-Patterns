#include "Cheetah.h"

Cheetah::Cheetah()
{

}

Cheetah::Cheetah(int HP, string huntingMethod, int damage, string speciality): Predator( HP, huntingMethod,  damage,  speciality)
{
    // this->setHP(HP);
    // this->sethuntingMethod(huntingMethod);
    // this->setDamage(damage);
    // this->setSpeciality(speciality);
}

Cheetah::Cheetah(string huntingMethod, string speciality)
{
    this->sethuntingMethod(huntingMethod);
    this->setSpeciality(speciality);
}

Cheetah::~Cheetah()
{
    
}

bool Cheetah::catchPrey(Prey* p)
{
    p->run();
    cout<<"The cheetah sprints forward with its eye on the " << p->getType() << "."<<endl;
}

bool Cheetah::getAttacked(Prey* p)
{
    cout<<"The " << p->getType() << " side steps the chee- tah, kicks back and causes " << p->getDamage() << " damage in the process."<<endl;

    bool killed = false;

    if( catchPrey(p) == true )
    {
        int number = p->fight(); 

            if( number == 0 )
            {
                //DO NOTHING
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

bool Cheetah::attack(Prey* p)
{
    cout<<"The cheetah causes "<< this->getDamage()<<" damage to the "<<p->getType()<<" by using "<< this->gethuntingMethod()<<"."<<endl;

    bool killed = false;
    int preyHP = p->takeDamage( this->getDamage() );
    p->setHP(preyHP);

    if( preyHP <= 0)
        killed = true;

    return killed; 
}

void Cheetah::die()
{
    cout<<"The hunter becomes the hunted."<<endl;
}

void Cheetah::speciality()
{
    cout<<"The tired cheetah uses "<<this->getSpeciality()<<"."<<endl;

    if( this->getHP() < 5 )
    {
        int specialAttackValue = this->getDamage() + ( (this->getDamage() * 10) / 100);
        this->setDamage(specialAttackValue);
    }   
}