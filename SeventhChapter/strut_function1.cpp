//练习以结构作为函数参数和返回值
//构建一个处理时间结构（例：19:30），并可相加时间
#include <iostream>
struct travel_time
{
    int hours;
    int mins;
};
travel_time time_add(travel_time, travel_time);
void show(travel_time);

int main()
{
    using namespace std;
    travel_time t1 {5, 45};
    travel_time t2 {4, 55};

    travel_time trip = time_add(t1, t2);
    cout << "Two-day total: ";
    show(trip);

    travel_time t3 {4, 32};
    cout << "Three-day total: ";
    show(time_add(trip, t3));

    return 0;
}

//实现两个时间的相加
travel_time time_add(travel_time t1, travel_time t2)
{
    travel_time save {0, 0};
    save.mins = (t1.mins + t2.mins) % 60;
    save.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / 60;
    return save;
}

void show(travel_time t)
{
    std::cout << t.hours << " hours "
              << t.mins << " minutes" << std::endl;
}