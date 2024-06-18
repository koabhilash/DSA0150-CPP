#include<iostream>
using namespace std;
class A{
	public:
		int funa(int n)
		{
			return n*2;
		}
};
class B{
	public:
		int funb(int n)
		{
			return n*3;
		}
};
class C{
	public:
		int func(int n)
		{
			return n*5;
		}
};
class D:public A,public B,public C{
	public:
};
int main()
{
	D d;
	cout<<d.funa(2)<<endl;
	cout<<d.funb(3)<<endl;
	cout<<d.func(5);
	return 0;
}

