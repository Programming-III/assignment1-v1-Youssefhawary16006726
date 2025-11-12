#ifndef REPTILE_H
#define REPTILE_H
#include "Animal.h"
class Reptile:public Animal{
private:
 bool isVenomous;
public:
Reptile();
Reptile(venom);  
~Reptile();        
 void setisVenomous();
  bool getisVenomous();
   
    };








#endif
