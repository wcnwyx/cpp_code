#include <iostream>
#include "mytime0.h"

int main()
{
    Time time_a(1,40);
    Time time_b(1,50);

    time_a.show();
    time_b.show();
    Time time_c = time_a.addTime(time_b);
    time_c.show();
}