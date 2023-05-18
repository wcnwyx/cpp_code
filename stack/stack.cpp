#include <iostream>
#include "stack.h"

Stack::Stack()
{
    top = 0;
}

Stack::~Stack()
{
    
}

int Stack::size() const
{
    return top;
}
bool Stack::isEmpty() const
{
    return top==0;
}

bool Stack::isFull() const
{
    return top==MAX;
}

bool Stack::push(Item & item)
{
    if(isFull()){
        return false;
    }
    items[top++] = item;
    return true;
}

bool Stack::pop(Item & item)
{
    if(isEmpty()){
        return false;
    }
    item = items[--top];
    return true;
}