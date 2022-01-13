#include <10-10-6.h>
#include <iostream>

Move::Move(double a, double b)
{
    x = a;
    y = b;
}
Move::~Move()
{

}
void Move::showmove() const
{
    std::cout << "X = " << x << std::endl
              << "Y = " << y << std::endl;
}
Move Move::add(const Move & m) const
{
    Move addone;
    addone.x = this->x + m.x;
    addone.y = this->y + m.y;
    return addone;
}
void Move::reset(double a, double b)
{
    x = a;
    y = b;
}