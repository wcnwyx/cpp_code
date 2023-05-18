//linux 环境下可以正常运行
//从对象的起始地址处，vtable中直接获取到虚拟方法，直接执行
#include <iostream>

using namespace std;

class Base
{
public:
	virtual void f() {
		cout << "Base::f()" << endl; 
	}
	virtual void g() { 
		cout << "Base::g()" << endl; 
	}
	virtual void h() { 
		cout << "Base::h()" << endl; 
	}
};
class Derive : public Base {
public:
	void g() {
		cout << "Derive::g()" << endl; 
	}
	virtual void test(){
		cout << "Derive::test()" << endl;
	}
};


typedef void (*Func)();
int main()
{
	Derive* d = new Derive();       
	long* dvptr = reinterpret_cast<long*>(d);         
	long* dvfuncptr = reinterpret_cast<long*>(*dvptr);
	for (int i=0;i<4;++i) {
		((Func)dvfuncptr[i])();
	}
 
	Base* b = new Base();
	long* bvptr = (long*)b;
	long* bvfuncptr = (long*)(*bvptr);
 
	for (int i=0;i<3;++i) {
		((Func)bvfuncptr[i])();
	}
 
	return 0;
}s