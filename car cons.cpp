#include<iostream>
using namespace std;
class car{
	private:
		string name;
		int year;
	public:
		car(string n,int y):name(n),year(y){
			cout<<"the car is manufactured"<<endl;
		}
		~car()
		{
			cout<<"the car is being destroyed"<<endl;	
		}
		void dis()
		{
			cout<<"the car name is "<<name<<" and manufactured in the year "<<year<<endl;
		}
};
int main()
{
	car c("BMW",2024);
	c.dis();
}
