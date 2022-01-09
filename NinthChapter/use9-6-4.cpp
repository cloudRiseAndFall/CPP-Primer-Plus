#include "9-6-4.h"
using namespace SALES;

int main()
{
    Sales test1, test2;
    const double ar[4] {1.2,4.5,7.4,2.4};
    setSales(test1, ar, 4);
    setSales(test2);
    showSales(test1);
    showSales(test2);
    return 0;
}