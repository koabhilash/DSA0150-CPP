#include<iostream>
using namespace std;
class inc{
	public:
		int a;
		inc(){
		}
		inc(int b){
			a=b;
		}
		int operator ++ (){
			return (++a);
		}
};
int main()
{
	inc i(10);
	cout<<(++i);
	return 0;
}
