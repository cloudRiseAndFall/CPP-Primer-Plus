#include "10-10-7.h"
#include <cstring>
#include <iostream>

Plorg::Plorg()
{
    strcpy(name, "no name");
    ci = 50;
}
Plorg::Plorg(char name[], int ci)
{
    strcpy(this->name, name);
    this->ci = ci;
}
Plorg::~Plorg()
{

}
void Plorg::setCI(int ci)
{
    this->ci = ci;
}
void Plorg::show() const
{
    std::cout << "Name: " << name << std::endl
              << " CI: "  << ci << std::endl;
}