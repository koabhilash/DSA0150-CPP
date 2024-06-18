#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,c,i,n;
	cout<<"enter a num  : ";
	cin>>n;
	if(n==0)
	cout<<"0";
	else if(n==1)
	cout<<"1";
	else
	cout<<"0 1 ";
	for(i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<c<<" ";
		if(n==i)
		{
			cout<<endl<<"nth fibanocii = "<<c;
		}
	}
	return 0;

}	
