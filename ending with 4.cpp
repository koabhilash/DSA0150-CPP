#include<iostream>
using namespace std;
void add4(int a[][4],int r,int c)
{
	int i,j,sum=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]%10==4)
			sum=sum+a[i][j];
		}
	}
	cout<<sum;
}
int main()
{
	int ar[3][4]={{24,16,14}, {19, 5, 4}};

	add4(ar,3,4);
	return 0;
}
