#include<iostream>
using namespace std;
bool isempty(int arr[20],int n)
{
	if(n==0) 
	cout<<"true";
	else
	cout<<"false";
}
int main()
{
	int a[]={};
	int s=sizeof(a)/sizeof(a[0]);
	cout<<isempty(a,s);
	return 0;
}
