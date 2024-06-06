#include "Backup.h


State* Backup::getState()
{
    return State;
}
   
void Backup:: setState(State* s)
{
    State = s;
}