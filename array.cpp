#include <iostream>
#include <array>
#include <string>

using namespace std;
const int num = 3;
const array<string,3> arr = {"1","2", "3"};

int main()
{
    for(int i=0;i<3;i++){
        cout << "array[" << i << "]=" << arr[i] << endl;
    }
    return 0;
}