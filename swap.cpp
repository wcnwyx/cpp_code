#include <iostream>

void swapr(int &, int &);//引用传递
void swapa(int *, int *);//指针传递
void swapv(int, int);//值传递

int main()
{
    using namespace std;
    int a = 1;
    int b = 2;
    cout << "init: a=" << a << ", b=" << b << endl;

    swapr(a, b);
    cout << "swapr a=" << a << ", b=" << b << endl;

    swapa(&a, &b);
    cout << "swapa a=" << a << ", b=" << b << endl;

    swapv(a, b);
    cout << "swapv a=" << a << ", b=" << b << endl;
}

void swapr(int & a, int & b){
    int temp = a;
    a = b;
    b = temp;
}

void swapa(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapv(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}