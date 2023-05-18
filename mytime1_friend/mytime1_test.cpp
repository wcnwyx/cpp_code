#include <iostream>
#include "mytime1.h"

int main()
{
    Time time_a(1,40);
    Time time_b(1,50);

    time_a.show();
    time_b.show();
    Time time_c = time_a + time_b;
    time_c.show();

    Time time_d = time_c * 3;
    time_d.show();

    Time time_e = 3 * time_c;
    time_e.show();
}