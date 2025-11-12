#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;
class Animal{
private:
string name;
int age;
bool ishungry;
public:
void display();
void feed();
void setname(n);
void setage(a);
int getage();
void setishungry(h);
bool getishungry();
string getname();
Animal();
Animal(n,a);
~Animal();
};



#endif
