#include<iostream>
using namespace std;
class person{
	public:
		string name,address;
};
class employee
{
	public:
	int empid;
	float salary;	
};
class displayinfo:public person,public employee{
	public:
    	info(string name,string address,int empid,float salary){
		cout<<"name of the person is "<<name<<" and address is "<<address<<endl;
		cout<<"emoployee id is "<<empid<<" and the salary is "<<salary;
}
};
int main()
{
	displayinfo d;
	d.info("john","hills colony,warangal",12,12.53);
}
