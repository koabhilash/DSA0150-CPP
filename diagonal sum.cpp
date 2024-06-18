#include<iostream>
using namespace std;
int main()
{
	int a[50][50];
	int r,c,i,j,ds=0;
	cout<<"enter num of rows and columns : ";
	cin>>r>>c;
	cout<<"enter the elements of matrix : ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			ds=ds+a[i][j];
		}
	}
	cout<<"diagonal sum = "<<ds;
	
}
