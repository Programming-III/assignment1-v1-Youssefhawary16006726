#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include "Animal.h"
class Enclosure{
private:
Animal*animals;
int capacity;
int currentcount;
public:
void addAnimal(Animal*a);
void displayAnimals();
Enclosure();
Enclosure(cap,countt,)
void setcapacity();
void setcurrentcount();
int getcapacity();
int getcurrentcount();
~Enclosure();
};








#endif
