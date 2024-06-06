#if !defined(State_H)
#define State_H

#include <iostream>
#include "Backup.h"

using namespace std;
class State 
{
private:
    int HPChanged;
    string huntingMethodChanged;
    string SpecialityChanged;
    int damageChanged;
    string typeChanged;

public:
    State();
    State(State &s);
    State(int H, string h, string s, int d, string t);
    void setHPChanged(int h);
    void sethuntingMethodChanged(string h);
    void setSpecialityChanged(string s);
    void setDamageChanged(int d);
    void setTypeChanged(string s);
};

#endif // State_H