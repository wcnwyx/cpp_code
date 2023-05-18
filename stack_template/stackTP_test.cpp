#include "stackTP.h"
#include <iostream>

int main()
{
    using std::cout;

    StackTP<int> stack(5);
    stack.show();

    stack.push(1);
    stack.push(2);
    stack.show();

    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.show();

    int i;
    stack.pop(i);
    std::cout<< "i="<< i << std::endl;
    stack.show();

    StackTP<int> stack1 = stack;
    stack1.show();

    stack1.pop(i);
    std::cout<< "i="<< i << std::endl;
    stack1.show();
    return 0;
}