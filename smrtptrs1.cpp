#include <iostream>
#include <memory>
#include <string>

int main()
{
    using namespace std;
    auto_ptr<string> array[5] = 
    {
        auto_ptr<string> (new string("a")),
        auto_ptr<string> (new string("b")),
        auto_ptr<string> (new string("c")),
        auto_ptr<string> (new string("d")),
        auto_ptr<string> (new string("e"))    
    };

    shared_ptr<string> win;
    win = array[2];

    for(int i=0;i<5;i++)
    {
        cout << *array[i] << endl; //如果win使用auto_ptr来定义,循环到array[2]是将报错，因为array[2]的所有权已经转移到了win
    };

    cout << "win ptr:" << *win << endl;
    cin.get();
    return 0;
}
