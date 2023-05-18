#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    cout << "short: [" << SHRT_MAX << "," << SHRT_MAX << "]," << "sizeOf:" << sizeof(short) << endl;
    cout << "int[" << INT_MIN << "," << INT_MAX << "]," << "sizeOf:" << sizeof(int) << endl;
    cout << "long[" << LONG_MIN << "," << LONG_MAX << "]," << "sizeOf:" << sizeof(long) << endl;
    cout << "longlong[" << LLONG_MIN << "," << LLONG_MAX << "]," << "sizeOf:" << sizeof(long long)<< endl;

    int i = {100};
    cout << "i=" << i << endl;

    long long ll = 0xFFFFLL;
    cout << "ll=" << ll << endl;
    
    return 0;
}