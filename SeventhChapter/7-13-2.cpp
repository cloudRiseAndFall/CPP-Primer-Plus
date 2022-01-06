#include <iostream>

const int ar_max = 10;
int initAr(double ar[]);
void showAr(double ar[], int length);
double average(double ar[]);

int main()
{
    double ar[ar_max];
    int length = initAr(ar);
    showAr(ar, length);
}

int initAr(double ar[])
{
    using namespace std;
    int count = 0;
    double sum = 0.0;
    cout << "Enter your scores(Maxium = 10, q = quit): ";
    for ( ; count < ar_max && cin >> ar[count]; count++)
    {
        cout << "Enter your scores(Maxium = 10, q = quit): ";
    }
    for (int i = 0; count + i < ar_max; i++)
        ar[count + i] = 0.0;

    return count; //返回用户输入了多少个值
}

void showAr(double ar[], int length)
{
    std::cout << "The scores: ";
    for (int i = 0; i < length; i++)
    {
        std::cout << ar[i] << " ";
    }
    std::cout << "\nThe average: " << average(ar) << std::endl;
}

double average(double ar[])
{
    double sum = 0.0;
    for (int i = 0; i < ar_max; i++)
        sum += ar[i];
    return sum / 10;
}