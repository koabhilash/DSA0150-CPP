#include<iostream>
using namespace std;
int main()
{
	int s,m,n,i,j,t,ma,na;
	int a[6]={3,4,1,6,8,2};// 1 2 3 4 6 8 
	s=sizeof(a)/sizeof(a[0]);
	cout<<"enter two nums m and n:";
	cin>>m>>n;
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(a[i]>a[j])
			{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
		}

	}

	for(i=0;i<s;i++)
	{
		cout<<a[i]<<" ";
		ma=a[s-m];
		na=a[n-1];
	}
	cout<<endl;
	cout<<"mth max = "<<ma<<endl;
	cout<<"nth max = "<<na;
		return 0;
}
