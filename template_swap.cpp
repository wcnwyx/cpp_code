//模板方法（泛型）和方法重载（多态）的使用
#include <iostream>

template <typename T>
void swap(T *a, T *b);

template <typename T>
void swap(T *a, T *b, int flag);

using namespace std;

int main()
{
    
    int a = 1, b = 2;
    cout << "beror a:" << a << ", b:" << b << endl;
    swap(&a, &b);
    cout << "after a:" << a << ", b:" << b << endl;

    string as = "as", bs="bs";
    cout << "beror as:" << as << ", bs:" << bs << endl;
    swap(&as, &bs);
    cout << "after as:" << as << ", bs:" << bs << endl;

    double ad = 1.1, bd = 2.2;
    cout << "beror ad:" << ad << ", bd:" << bd << endl;
    swap(&ad, &bd, 1);
    cout << "after ad:" << ad << ", bd:" << bd << endl;

    return 0;
}

template <typename T>
void swap(T *a, T *b)
{
    cout << "swap1" << endl;
    T temp = *a;
    *a = *b;
    *b = temp;
}

template <typename T>
void swap(T *a, T *b, int flag)
{
    cout << "swap2" << endl;
    T temp = *a;
    *a = *b;
    *b = temp;
}