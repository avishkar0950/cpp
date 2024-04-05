//multiple
#include<iostream>
using namespace std;
class a
{
	public:
	int x;
	void setx(int a1)
	{
		x=a1;
		}	
};
class b
{
	public:
	int y;
	void sety(int a2)
	{
		y=a2;
		}	
};
class c:public a,public b
{
	public:
		void add()
		{
			cout<<x+y;
		}
};
int main()
{
	c c1;
	c1.setx(85);
	c1.sety(74);
	c1.add();
	return 0;
}
