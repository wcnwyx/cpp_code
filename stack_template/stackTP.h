#ifndef STACKTP_H_
#define STACKTP_H_

#include <iostream>

template <class T>
class StackTP
{
    private:
        enum{MAX=10};
        T * items;
        int maxSize;
        int top;
    public:
        explicit StackTP(int s = MAX);
        StackTP(const StackTP & st);
        ~StackTP(){delete [] items;};
        bool isEmpty(){ return top==0;};
        bool isFull(){return top==maxSize;};
        int size(){return top;};
        bool push(const T & t);
        bool pop(T & t);
        StackTP<T> & operator=(const StackTP & st);
        void show(){std::cout <<"maxSize:" << maxSize << ", size:" << size() << ", empty:" << isEmpty() << ", full:" << isFull() << std::endl;}
};

template <class T>
StackTP<T>::StackTP(int s) : maxSize(s), top(0)
{
    items = new T[s];
}

template <class T>
StackTP<T>::StackTP(const StackTP & st)
{
    maxSize = st.maxSize;
    top = st.top;
    items = new T[maxSize];
    for(int i=0;i<top;i++)
    {
        items[i] = st.items[i];
    }
}

template <class T>
bool StackTP<T>::push(const T & t)
{
    if(isFull()){
        return false;
    }else{
        items[top++] = t;
        return true;
    }
}

template <class T>
bool StackTP<T>::pop(T &t)
{
    if(isEmpty()){
        return false;
    }else{
        t = items[--top];
        return true;
    }
}

template <class T>
StackTP<T> & StackTP<T>::operator=(const StackTP<T> & st)
{
    if(this == &st){
        return *this;
    }
    delete [] items;

    maxSize = st.maxSize;
    top = st.top;
    items = new T[maxSize];
    for(int i=0;i<top;i++){
        items[i] = st.items[i];
    }
    return *this;
}

#endif