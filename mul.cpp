#include<iostream>
using namespace std;
void xhandler(int test)
{
	try{
		if(test)throw test;
		else throw "value is zero";
		
	}
	catch(int i){
		cout<<"caught exception :"<<i<<endl;
		
	}
	catch(const char *str)
	{
		cout<<"caught a string";
		cout<<str<<endl;
	}
}
int main()
{
	cout<<"start"<<endl;
	xhandler(1);
	xhandler(2);
	xhandler(0);
	xhandler(3);
	cout<<"end";
	return 0;
}
