#include <iostream>

class Father
{
    private:
        int age;
    public:
        Father(int i){age = i;}
        virtual ~Father(){};
        int getAge(){return age;};
        virtual void say(){std::cout << "I am Fathre. my age is " << age << std::endl;}
};

class Son : public Father
{
    public:
        Son(int i):Father(i){}
        virtual void say(){std::cout << "I am Son. my age is " << getAge() << std::endl;}
};

typedef void (*FuncPtr)();

int main()
{
    Father father(50);
    Son son(20);
    father.say();
    son.say();

    Father * fp = &son;
    fp->say();
}