#include <iostream>
#include "mytime2.h"

int main()
{
    using std::cout;

    Time time_a(1,40);
    Time time_b(1,50);

    cout << time_a;
    cout << time_b;

    Time time_c = time_a + time_b;
    cout << time_c;

    Time time_d = time_c * 3;
    cout << time_d;

    Time time_e = 3 * time_c;
    cout << time_e;
    return 0;
}