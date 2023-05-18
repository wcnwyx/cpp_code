#include <iostream>
#include "stack.h"

void printStack(const Stack);

int main()
{
    
    Stack stack;
    
    printStack(stack);

    Item a = 1;
    Item b = 2;
    Item c = 3;
    stack.push(a);
    stack.push(b);
    stack.push(c);
    printStack(stack);

    Item pop;
    bool pop_ret = stack.pop(pop);
    std::cout << "pop_ret:" << pop_ret << ", value:" << pop << std::endl;
    printStack(stack);

    return 0;
}

void printStack(const Stack stack)
{
    std::cout << "isEmpty()=" << stack.isEmpty();
    std::cout << ", isFull()=" << stack.isFull();
    std::cout << ", size()=" << stack.size() << std::endl;
}