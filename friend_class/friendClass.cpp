#include "friendClass.h"

void TV::show()
{
    std::cout << "TV.show()" << " state:" << state << " channel:" << channel << std::endl;
}

void Remote::show(TV tv)
{
    //因为Remote是TV的friend class，所以Remote中可以直接访问TV的private属性，不用通过TV的get方法获取属性
    std::cout << "Remote.show()" << " state:" << tv.state << " channel:" << tv.channel << std::endl;
}

int main()
{
    TV tv(1,2);
    Remote remote;
    tv.show();
    remote.show(tv);
    return 0;
}