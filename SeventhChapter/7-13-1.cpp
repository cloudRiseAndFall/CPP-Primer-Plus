//计算调和平均数
#include <iostream>
double average(double, double);

int main()
{
    using namespace std;
    cout << "Enter two integer:\n";
    double x, y;
    while (cin >> x >> y && x != 0 && y != 0)
    {
        cout << "Average = " << average(x, y)
             << endl;
        cout << "Enter two integer\n";    
    }
    cout << "Done!\n";
    return 0;
}

double average(double x, double y)
{
    return 2.0 * x * y / (x + y);
}