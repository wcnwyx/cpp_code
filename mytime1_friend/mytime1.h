#ifndef MYTIME1_H_
#define MYTIME1_H_
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
        friend Time operator*(int n, const Time & time);//友元函数,支持 int*Time
        void show() const;
};

#endif