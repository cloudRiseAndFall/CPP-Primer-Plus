#include "9-6-4.h"
#include <cstring>
#include <iostream>

namespace SALES
{
    void setSales(Sales& s, const double ar[], int n)
    {
        double sum, max, min;
        sum = max = min = 0.0;
        int num = n >= 4 ? 4 : n;
        for (int i = 0; i < num; i++)
        {
            s.sales[i] = ar[i];
            sum += ar[i];
            max = max > ar[i] ? max : ar[i];
            min = min < ar[i] ? min : ar[i];
        }
        s.max = max;
        s.min = min;
        s.average = sum / num;
    }
    void setSales(Sales& s)
    {
        for (int i = 0; i < QUARTERS; i++)
            s.sales[i] = 0.0;
        s.min = s.max = s.average = 0.0;
    }
    void showSales(const Sales& s)
    {
        using std::cout;
        using std::endl;
        cout << "The number are: " << endl;
        for (int i = 0; i < QUARTERS; i++)
            std::cout << s.sales[i] << " ";
        cout << endl << "MAX: " << s.max << endl
             << "Min: " << s.min <<endl
            << "Average: " << s.average << endl;
    
    }

}