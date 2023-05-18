#include <iostream>

int main()
{
    using namespace std;
    int a = 1;
    int &a_ref = a;//变量引用

    cout << "a=" << a << ", a_ref=" << a_ref << endl;
    a_ref++;
    cout << "a=" << a << ", a_ref=" << a_ref << endl;

    cout << "&a=" << &a << ", &a_ref=" << &a_ref << endl;

    return 0;
}