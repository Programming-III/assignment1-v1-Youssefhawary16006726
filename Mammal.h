#ifndef MAMMAL_H
#define MAMMAL_H
#include "Animal.h"
class Mammal:public Animal{
private:
string furcolor;
public:
Mammal();
Mammal(string fcolor);
~Mammal();
void setfurcolor();
string getfurcolor();
};







#endif
