#include<iostream>
using namespace std;
class addition{
	public:
		void add(int n,char c)
		{
			cout<<"integer = "<<n<<endl;
			cout<<"char = "<<c<<endl;
		}
		void add(char c,int n)
		{
			cout<<"char = "<<c<<endl;
			cout<<"integer = "<<n;
		}
		
};
int main()
{
	addition a;
	a.add(23,'k');
	a.add('m',12);
}
