#include "caretaker.h"

Backup* caretaker:: getMemento()
{
    return memento;
}
    
void caretaker::setMemento(Backup* m)
{
    memento = m;
}