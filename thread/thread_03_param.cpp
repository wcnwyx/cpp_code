#include <iostream>
#include <thread>

void say(int& _i)
{
    std::cout << "say value:" << _i << " address:" << &_i << std::endl;
}

int main()
{
    int i = 2;
    std::cout << "&i:" << &i << std::endl;
    say(i);

    // std::thread t(say, i);
    // t.join();
    return 0;
}