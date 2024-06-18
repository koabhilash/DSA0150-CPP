#include <iostream> 
using namespace std; 

int main() 
{ 

	int a,b,c;
	a=10;
	b=20;
	c=40;
	int max_num;
	max_num=(a>b)? ((a>c)? a:c) : ((b>c)? b:c);
	cout<<"max num = "<<max_num;

	return 0; 
}

