#include<iostream>
using namespace std;

class Addtion
{
	public:
		Addtion(int a1,int a2)
		{
			cout<<"Addtion of a1+a2 ="<<a1+a2<<endl;
		}	
};
class sub
{
	public:
		sub(int a1,int a2)
		{
			cout<<"subtraction of a1-a2 ="<<a1-a2<<endl;
		}	
};
class mul
{
	public:
		mul(int a1,int a2)
		{
			cout<<"multipliction of a1*a2 ="<<a1*a2<<endl;
		}	
};
class Div
{
	public:
		Div(int a1,int a2)
		{
			cout<<"division of a1/a2 ="<<a1/a2<<endl;
		}	
};

int main()
{	
	int a1,a2;
	cout<<"Enter number a1 and a2"<<endl;
	cin>>a1>>a2;
	Addtion ob(a1,a2);
	sub obj1(a1,a2);
	mul obj2(a1,a2);	
	Div obj3(a1,a2);
	
	return 0;
}