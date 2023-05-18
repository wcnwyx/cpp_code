#include <iostream>
#include <thread>

class Runnable
{
private:
    int i;
public:
    Runnable(int & _i){i=_i;};
    void operator()()
    {
        int t;
        for(int j=0;j<100000;j++)
        {
            //std::cout << j << "\n";
            if(j%10000==0){
                std::cout << j << "\n";
            }
            t = i+j;
        }
    }
};

int main()
{
    int local = 1;
    Runnable runnable(local);
    std::thread t(runnable);
    bool joinable1 = t.joinable();
    t.detach();
    bool joinable2 = t.joinable();
    std::cout << "joinable1:" << joinable1 << " joinable2:" << joinable2 << std::endl;
    return 0;
}