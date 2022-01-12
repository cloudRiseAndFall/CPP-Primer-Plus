#include "10-10-3.h"

int main()
{
    Golf test1("David Hum", 10);
    test1.showgolf();
    Golf test2;
    test2.setgolf();
    test2.showgolf();
    test2.resethandicap(55);
    test2.showgolf();

    return 0;
}