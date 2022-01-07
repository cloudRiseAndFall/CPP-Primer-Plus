#include <iostream>

template <typename T>
T max5(T num[5]);

int main()
{
    int test1[5] {1, 2, 3, 4, 5};
    double test2[5] {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << max5(test1) << std::endl
              << max5(test2) << std::endl;
    return 0;
}

template <typename T>
T max5(T num[5])
{
    T max;
    for (int i = 0; i < 4; i++)
        max = num[i] < num[i+1] ? num[i+1] : num[i];
    return max;
}