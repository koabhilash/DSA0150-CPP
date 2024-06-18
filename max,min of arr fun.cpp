#include<iostream>
using namespace std;
int main(int a[])
{
	int n=5,i,max=0,min,j,k;
	for(i=0;i<n;i++)
	{
	
		if(a[i]>max)
		max=a[i];
	}
	min=max;
	for(j=0;j<n;j++)
	{
		if(a[j]<min)
		min=a[j];
	}
	cout<<"max = "<<max<<endl;
	cout<<"min = "<<min;
	return 0;
}

