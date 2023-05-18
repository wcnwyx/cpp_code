#ifndef MYTIME2_H_
#define MYTIME2_H_
#include <iostream>
class Time
{
    private:
        int hours;
        int minutes;
    public:
        Time();
        Time(int h, int m=0);
        ~Time();
        void addHour(int h);
        void addMinute(int m);
        void reset(int h=0,int m=0);
        Time operator +(const Time & time) const;//加法运算符重载
        Time operator *(int n) const;//乘法运算符重载，支持 Time*int
        friend Time operator*(int n, const Time & time)
            {return time * n; };//友元函数,支持 int*Time,直接使用inline实现
        friend std::ostream & operator<<(std::ostream & os, const Time & time);//friend 函数重载 << 运算符
};
#endif