#include <iostream>

struct CandyBar
{
    //直接用char* 定义会出现警告
    //“ deprecated conversion from string constant to ‘char*’ ”
    //原因是不声明为const会使该指针可单独修改字符串中的某个字符，而不
    //是将其作为一个整体看待
    const char* band;
    double weight;
    int calorie;
};
void init_candybar(CandyBar&, const char* band = "Millennium Munch", 
                   double weight = 2.85, int cal = 350);
void show_candybar(const CandyBar&);

int main()
{
    CandyBar use;
    init_candybar(use);
    CandyBar useagain;
    init_candybar(useagain, "HelloWorld", 10, 11);
    show_candybar(use);
    show_candybar(useagain);
    use.band = "test";
    show_candybar(use);
}

void init_candybar(CandyBar& copy, const char* band, double weight, int cal)
{
    copy.band = band;
    copy.weight = weight;
    copy.calorie = cal;
}

void show_candybar(const CandyBar& can)
{
    std::cout << "Band: " << can.band << std::endl
              << "Weight: " << can.weight << std::endl
              << "Calorie: " << can.calorie << std::endl;
}