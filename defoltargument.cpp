#include<iostream>
using namespace std;
int defualt_argument(int x,int y,int z)
{
	cout<<x+y+z;
}
int main()
{
	int z;
	defualt_argument(25,0,z);
	defualt_argument(50,0,z);
	
	
	 return 0;
}

