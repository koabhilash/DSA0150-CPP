#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a num : ";
	cin>>n;
	int ls,sls;
	ls=n%10;
	n=n/10;
	sls=n%10;
	cout<<"least significant = "<<ls<<endl;
	cout<<"second least significant = "<<sls;
	return 0;
}
