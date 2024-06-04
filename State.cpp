#include "State.h"

  State::State()
  {

  }

State::State(State &s)
{
    this->damageChanged = s.damageChanged;
    this->HPChanged = s.HPChanged;
    this->huntingMethodChanged = s.huntingMethodChanged;
    this->SpecialityChanged = s.SpecialityChanged;
    this->typeChanged = s.typeChanged;
}


State::State(int H, string h, string s, int d, string t)
{
    HPChanged = H;
    huntingMethodChanged = h;
    SpecialityChanged = s;
    damageChanged = d;
    typeChanged = t;
}

void State::setHPChanged(int h)
{
    HPChanged=h;
}

void State::sethuntingMethodChanged(string h)
{
    huntingMethodChanged = h
}

void State::setSpecialityChanged(string s)
{
    SpecialityChanged = s
}

void State::setDamageChanged(int d)
{
    damageChanged = d;
}

void State::setTypeChanged(string t)
{
    typeChanged=t;
}


