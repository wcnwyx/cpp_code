#include <iostream>
#include "mytime0.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

Time::~Time(){}

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

Time Time::addTime(const Time & time) const
{
    Time ret;
    ret.hours = hours + time.hours + (minutes + time.minutes)/60;
    ret.minutes = (minutes + time.minutes)%60;
    return ret;
}

void Time::show() const
{
    std::cout << "h:" << hours << ", mintes:" << minutes << std::endl;
}