#include <iostream>
#include <thread>

class Runnable
{
private:
    int value;
public:
    Runnable(int a){value=a;}
    void operator()(){std::cout << "Runnable.run(), value=" << value << std::endl;}
};

void hello()
{
    std::cout << "hello world! \n";
}

int main()
{

    //无参函数初始化
    std::thread t1(hello);
    t1.join();

    //带有函数调用操作符()的类，可以使用参数
    Runnable runable(1);
    std::thread t2(runable);
    t2.join();

    std::thread t3(Runnable(2));
    t3.join();

    //lambda 表达式
    std::thread t4([]{std::cout << "lambda run \n";});
    t4.join();

    return 0;
}