#include "10-10-1.h"

int main()
{
    Account david {"David", "20220111", 1000000.0};
    david.show();
    david.addMoney(100);
    david.show();
    david.subMoney(10000000);
    david.show();
    david.subMoney(100);
    david.show();

    return 0;
}