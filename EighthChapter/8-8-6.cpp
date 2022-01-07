#include <iostream>
#include <cstring>
template <typename T>
T maxn(T ar[], int amount);
template <>
const char* maxn(const char* str[], int amount);
//常量指针不能赋值给普通指针，普通指针可以赋值给常量指针

int main()
{
    int i[6] {3, 2, 1, 4, 6, 5};
    double d[4] {1.1, 5.5, 6.6, 4.4};
    const char* c[4] {"hello world.", "What's up!", 
                "I like it very much.", "halabajiya"};
    std::cout << maxn(i, 6) << std::endl
              << maxn(d, 4) << std::endl
              << maxn(c, 4) << std::endl;
    return 0;
}

template <typename T>
T maxn(T ar[], int amount)
{
    T max = ar[0];
    for (int i = 1; i < amount; i++)
        max = max < ar[i] ? ar[i] : max;
    return max;
}

template <>
const char* maxn(const char* str[], int amount)
{
    using namespace std;
    const char* max = str[0];
    for (int i = 1; i < amount; i++)
        max = strlen(max) < strlen(str[i]) ? str[i] : max;
    return max;    
}