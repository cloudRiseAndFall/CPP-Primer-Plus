#include "10-10-6.h"

int main()
{
    Move test1{12, 13};
    test1.showmove();
    Move test2{34, 45};
    test2.showmove();
    Move test3;
    test3.showmove();
    test3 = test2.add(test1);
    test3.showmove();
    test3.reset();
    test3.showmove();

    return 0;
}