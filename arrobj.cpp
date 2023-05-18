#include <iostream>
#include <array>
#include <string>

using namespace std;
const int NUM = 4;
const array<std::string, NUM> NAMES = {"Spring", "Summer", "Fall", "Winter"};

void fill(std::array<std::string, NUM> *arr);
void show(std::array<std::string, NUM> arr);

int main()
{
    std::array<std::string, NUM> arr;
    cout << "main &arr=" << &arr << endl;
    fill(&arr);
    show(arr);
    return 0;
}

void fill(std::array<std::string, NUM> *arr)
{
    cout << "fill &arr=" << arr << endl;
    for(int i=0;i<NUM;i++){
        std::cout << "input a double num";
        std::cin >> (*arr)[i];
    }
}

void show(std::array<std::string, NUM> arr)
{
    cout << "show &arr=" << &arr << endl;
    for(int i=0;i<NUM;i++){
        std::cout << NAMES[i] << ":" << arr[i] << endl;
    }
}