#if !defined(caretaker_H)
#define caretaker_H

#include <iostream>
#include "Backup.h"

using namespace std;
class caretaker 
{
private:
    Backup* memento;

public:
    caretaker();
    Backup* getMemento();
    void setMemento(Backup* m);

};

#endif // caretaker_H