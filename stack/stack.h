#ifndef STACK_H_
#define STACK_H_
typedef unsigned long Item;
class Stack
{
    private:
        enum {MAX=10};
        Item items[MAX];
        int top;
    public:
        Stack();
        ~Stack();
        int size() const;
        bool isEmpty() const;
        bool isFull() const;
        bool push(Item &item);
        bool pop(Item &item);
};
#endif