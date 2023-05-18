#include <iostream>

int sum(int, int);
int mul(int, int);

int process(int (*fun_p)(int,int), int, int);


int main()
{

    int a = 1;
    int b = 2;

    int ret;
    ret = process(sum, a, b);
    std::cout << "sum ret=" << ret << std::endl;

    ret = process(mul, a, b);
    std::cout << "mul ret=" << ret << std::endl;

}

int process(int (*fun_p)(int, int), int a, int b)
{
    int ret = (*fun_p)(a, b);// fun_p(a,b)也可以
    return ret;
}

int sum(int a, int b)
{
    return a+b;
}

int mul(int a, int b){
    return a*b;
}