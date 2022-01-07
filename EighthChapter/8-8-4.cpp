#include <iostream>
using namespace std;
#include <cstring>
struct stringy
{
    char* str;
    int ct;
};
void set(stringy& beany, const char* insert);
void show(const stringy& beany, int num = 1);
void show(const char * str, int num = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void set(stringy& beany, const char* insert)
{
    strcpy(beany.str, insert);
    beany.ct = strlen(insert);
}

void show(const stringy& beany, int num)
{
    for (int i = 0; i < num; i++)
        cout << beany.str << endl;
}

void show(const char* str, int num)
{
    for (int i = 0; i < num; i++)
        cout << str << endl;
}