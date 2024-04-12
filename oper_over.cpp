//operator overlaoding
#include<iostream>
using namespace std;
class over
{
	private:
		int a,b;
	public:
		over(int a1=0,int b1=0)
		{
			a=a1;
			b=b1;
		}
		over operator+(over const &obj)
		{
			over o1;
			o1.a=a+obj.a;
			o1.b=b+obj.b;
			return o1;
		}
		void disp()
		{
			cout<<a<<"\t"<<b<<endl;
		}
};
int main()
{
	over o1(45,74),o2(56,98);
	over o3=o1+o2;
	o3.disp();
	return 0;
}
