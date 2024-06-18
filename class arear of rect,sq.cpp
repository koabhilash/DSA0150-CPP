#include<iostream>
using namespace std;
class shape{
	public:
		double area(double l,double b)
		{
			return l*b;
		}
		double area(double a)
		{
			return a*a;
		}
		
};
int main()
{
	shape s;
	cout<<"area of square = "<<s.area(9.0)<<endl;
	cout<<"area of rectangle = "<<s.area(2,7)<<endl;
	
	return 0;
}
