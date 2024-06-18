#include<iostream>
using namespace std;
int main()
{
	int c,f,i,j;
	float cel[]={4.4,10,12,7,70};
	float far[10];
	c=sizeof(cel)/sizeof(cel[0]);
	for(i=0;i<c;i++)
	{
		far[i]=9/5*(cel[i]+32);
		cout<<far[i]<<" ";
	}
	return 0;
}
