#include<iostream>
using namespace std;
int main()
{
	int up=0,i;
	string str;
	str="{C++ is a Programming Language}";
	for(i=0;i<str.length();i++)
	{
	if(str[i]>='A' && str[i]<='Z')
	{
	up++;
	}
	}
	cout<<"num of uppercase alphabets = "<<up;
	return 0;
}
