#include "10-10-3.h" 
#include <cstring>
#include <iostream>   
    
Golf::Golf(const char* name, int hc)
{
    strcpy(fullname, name); 
    handicap = hc;
}
Golf::~Golf()
{

} 
void Golf::setgolf()
{
    using std::cout;
    using std::cin;
    using std::endl;

    char name[Len];
    int hen;
    cout << "Enter your name: ";
    cin.getline(name, Len);
    cout << "Enter the handicp: ";
    cin >> hen;
    *this = Golf(name, hen);
}
void Golf::resethandicap(int hc)  //reset handicap
{
    handicap = hc;
}
void Golf::showgolf() const
{
    std::cout << "Name: " << fullname <<std::endl
              << "Handicp: " << handicap << std::endl;
}