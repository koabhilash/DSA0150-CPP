#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4};
	int b[]={5,6,7,8,9,10};
	int i,j,an,bn,cn;
	an=sizeof(a)/sizeof(a[0]);
	bn=sizeof(b)/sizeof(b[0]);
	int c[an+bn];
	cn=an+bn;
	for(i=0;i<an;i++){
		c[i]=a[i];
	}
	for(i=0;i<bn;i++){
		c[an+i]=b[i];
	}
	for(i=0;i<cn;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
