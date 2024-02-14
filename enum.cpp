#include<iostream>
using namespace std;

int main()
{
	enum Gender{male,female};
	Gender g=male;
	switch(g){
		case male:
			cout<<"gender is male";
			break;
		case female:
			cout<<"gender is feaml";	
			break;
		
	}
	

	
	
	return 0;
}
