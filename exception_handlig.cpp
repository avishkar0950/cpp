#include<iostream>
using namespace std;
float divi(int x,int y)
{
	if((x==0)||(y==0))
	{
		throw"expception caught";
	}
	return x/y;
}
int main()
{
	int i,j;
	cout<<"enter the value of i&j";
	cin>>i>>j;
	try
	{
		cout<<divi(i,j)<<endl;
	}
	catch(const char *e)
	{
		cout<<e<<endl;
	}
}
