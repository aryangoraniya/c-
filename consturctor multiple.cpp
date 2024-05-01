#include<iostream>
using namespace std;

class a
{
	public:

		a()
		{
			cout<<"class a\n";
		}
};
class b:public a
{
	public:
		b(){
			cout<<"class b\n";
		}
		
	
};
int main()
{
	b B;
	 return 0;
}

