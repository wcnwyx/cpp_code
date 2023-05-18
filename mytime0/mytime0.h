#ifndef MYTIME0_H_
#define MYTIME0_H_
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
        Time addTime(const Time & time) const;
        void show() const;
};
#endif