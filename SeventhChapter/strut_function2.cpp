//实现直角坐标系转极坐标系
#include <iostream>
#include <cmath>
const double Rad_to_deg = 57.29577951;

//极坐标系
struct polar
{
    double distance;
    double angle;
};
//直角坐标系
struct rect
{
    double x;
    double y;
};

void rect_to_polar(const rect *xypos, polar *pda);
void show_polar(const polar *dapos);

int main()
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Enter the x and y valus: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}

void rect_to_polar(const rect *xypos, polar *pda)
{
    pda->angle = atan2(xypos->y, xypos->x);//计算tan y/x（弧度制表示）
    pda->distance = sqrt(xypos->x * xypos->x + xypos->y * xypos->y);
}

void show_polar(const polar *dapos)
{
    std::cout << "distance = " << dapos->distance
              << ", angle = " << dapos->angle * Rad_to_deg
              << " degrees." << std::endl;
}