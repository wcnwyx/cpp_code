#include <iostream>

class TV
{
private:
    int state;
    int channel;

public:
    friend class Remote;
    TV(int s, int c): state(s), channel(c){};
    void show();
};

class Remote
{
public:
    void show(TV tv);
};