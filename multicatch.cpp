#include<iostream>
using namespace std;
void num(float a)
{
	try
	{
		if(a>0)
		{
			throw a;
			
		}
		else
		{
			throw a;
		}
	}
	catch(int x)
	{
		cout<<x;
	}
	catch(float x)
	{
		cout<<"value type is float";
	}
}
int main()
{
	num(10);
	num(10.1);
}
