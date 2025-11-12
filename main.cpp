#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;
void Animal::display(){
cout<<"name"<<Animal.name;
cout<<"age"<<Animal.age;
cout<<"hunger status"<<Animal.ishungry;}
void Animal::feed(){
if(Animal.ishungry==false)
cout<<"animal does not need to be fed";
else(Animal.ishungry==true)
cout<<"Animal needs to be fed";}
Animal::Animal(){Animal.name=""; Animal.age=0; Animal.ishungry=false; }
Animal::Animal(n,a){Animal.name=n; Animal.age=a;}
Animal::~Animal(){}
void Animal:: setname(n){Animal.name=n;};
void Animal:: setage(a){Animal.age=a;};
int Animal ::getage(){return Animal.age};
void Animal:: setishungry(h){ishungry=h;};
bool Animal:: getishungry(){return ishungry;};
string Animal::getname(){return Animal.name;};
void Enclosure:: addAnimal(Animal*a){
animals[currentcount]=a;}
void Enclosure:: displayAnimals(){
for(int=0;i<currentcount;i++){
cout<<Enclosure.animals[i];   
}
}
Enclosure::Enclosure(){
capacity=0; currentcount=0; };
Enclosure(cap,countt,){
Animal.display(); Enclosure.capacity=cap; Enclosure.currentcount=countt;}
void setcapacity(c){Enclosure.capacity=c;};
void setcurrentcount(cc){Enclosure.currentcount=cc;};
int getcapacity(){return Enclosure.capacity;};
int getcurrentcount(){return Enclosure.currentcount;};
~Enclosure(){delete animals[]};

int main() {
    
    
    return 0;
}
