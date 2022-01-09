#include "9-6-1.h"
#include <cstring>
#include <iostream>

void setgolf(golf& g, const char* name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc; 
}

int setgolf(golf& g)
{
    using std::cout;
    using std::endl;
    using std::cin;
    cout << "Enter your name: ";
    char name[Len] = "\0";
    cin.getline(name, Len);
    cout << "Enter your handicap(by int): ";
    int hip;
    cin >> hip;
    setgolf(g, name, hip);
    if (strcmp(name, "\0") == 0)
        return 0;
    else
        return 1;

}

void handicap(golf& g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf& g)
{
    using std::cout;
    using std::endl;
    cout << "Name: " << g.fullname << endl
         << "Handicap: " << g.handicap << endl;
}
