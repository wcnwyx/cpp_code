#include <iostream>
#include "mytime2.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

Time::~Time()
{
    std::cout << "destory Time." << this <<std::endl;
}

void Time::addHour(int h)
{
    hours+=h;
}

void Time::addMinute(int m)
{
    hours+=m/60;
    minutes+=m%60;
}

void Time::reset(int h,int m)
{
    hours = h;
    minutes = m;
}

Time Time::operator+(const Time & time) const
{
    Time ret;
    ret.hours = hours + time.hours + (minutes + time.minutes)/60;
    ret.minutes = (minutes + time.minutes)%60;
    return ret;
}

Time Time::operator*(int h) const
{
    int allMinutes = hours * 60 * h + minutes * h;
    Time ret;
    ret.hours = allMinutes/60;
    ret.minutes = allMinutes%60;
    return ret;
}

//友元函数实现，不用使用Time::operator*
std::ostream & operator<<(std::ostream & os, const Time & time)
{
    os << "h:" << time.hours << ", mintes:" << time.minutes << std::endl;
    return os;
}