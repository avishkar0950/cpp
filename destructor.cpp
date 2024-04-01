//destructor
#include<iostream>
using namespace std;
class stud
{
	public:
		stud()
		{
			cout<<"constructor called";
		}
		~stud()
		{
			cout<<"destructor called";
		}
};
int main()
{
	stud a1;
	return 0;
}
