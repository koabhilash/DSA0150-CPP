#include<iostream>
using namespace std;
class area{
	public:
		area(int l,int b,int r)
		{
			cout<<"area of triangle = "<<(0.5)*l*b<<endl;
			cout<<"area of rectangle = "<<l*b<<endl;
			cout<<"area of circle = "<<(3.14)*r*r<<endl;
		}
		~area()
		{
			cout<<"all shapes destroyed";
		}
};
int main()
{
	area(5,10,8);
	return 0;
}
