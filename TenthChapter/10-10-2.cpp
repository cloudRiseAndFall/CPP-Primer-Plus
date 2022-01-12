#include "10-10-2.h"
#include <cstring>
#include <iostream>

Person::Person(const std::string & ln, const char * fn)
{
    lname = ln;
    strcpy(fname, fn);
}
Person::~Person()
{

}
void Person::Show() const
{
    std::cout << fname << " " << lname << std::endl;
}
void Person::FormalShow() const
{
    std::cout << lname << ", " << fname << std::endl;
}