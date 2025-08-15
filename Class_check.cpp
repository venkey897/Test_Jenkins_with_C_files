#include<iostream>
using namespace std;
class check{
	int a=0;
	 int in;
	public: 
	void display(){
		cout<<"a value is=\n"<<a<<"in is= "<<in;
	}
};
int main(void){
	
	check obj;
	obj.display();
	return 0;
}
