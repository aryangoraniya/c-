#include<iostream>
using namespace std;

class brvrg
{
	public:
	void show(){
		cout<<"dr.vrg";
	}
};
class pbr:virtual brvrg
{
	void show(){
		cout<<"pbr";
	}
};
int main()
{
	brvrg a;
	a.show();
	 return 0;
}

