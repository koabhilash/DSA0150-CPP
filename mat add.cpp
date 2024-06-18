#include<iostream>
using namespace std;
int main()
{
	int a[50][50]={{1,2},{3,4}};
	int b[50][50]={{1,2},{3,4}};
	int c[50][50],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<c[i][j]<<" ";
			
		}
		cout<<endl;
	}
	
}
