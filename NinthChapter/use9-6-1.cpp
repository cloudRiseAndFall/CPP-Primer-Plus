#include "9-6-1.h"

int main()
{
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);

    golf andy;
    setgolf(andy);
    showgolf(andy);

    handicap(ann, 12);
    showgolf(ann);

    return 0;
}