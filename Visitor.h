#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;
class Visitor{
private:
string visitorname;
int ticketsbought;
public:
void displayinfo();
Visitor();
Visitor(vname,tickets);
~Visitor();
void setvisitorname();
string getvisitorname();
void setticketsbought();
int getticketsbought();
};






#endif
