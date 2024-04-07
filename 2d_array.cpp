#include<iostream>
using namespace std;
int main()
{
	int arr[2][3];
	int i,j;
	cout<<"enter the arr element"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}

		cout<<"array element are \n";
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<arr[i][j]<<"\t";
			}
			cout<<endl;
		}
}
