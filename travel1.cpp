#include <iostream>

using namespace std;

struct travel_time
{
    int hour;
    int min;
};

travel_time * sum_time(const travel_time *, const travel_time *);
void show_time(const travel_time *);

int main()
{
    travel_time a = {1, 50};
    travel_time b = {1, 40};
    cout << "main &a=" << &a << endl;
    cout << "main &b=" << &b << endl;

    travel_time *all = sum_time(&a, &b);
    cout << "main &all=" << all << endl;
    show_time(all);

    delete all;
    return 0;
}

travel_time * sum_time(const travel_time *a, const travel_time *b){
    travel_time *all = new travel_time;

    all->min = (a->min + b->min) % 60;
    all->hour = a->hour + b->hour + (a->min + b->min)/60;
    
    cout << "sum_time &a=" << a << endl;
    cout << "sum_time &b=" << b << endl;
    cout << "sum_time &all=" << all << endl;

    return all;
}

void show_time(const travel_time *all){
    cout << "show_time &all=" << all << ", hour=" << all->hour << ", min=" << all->min << endl;
}