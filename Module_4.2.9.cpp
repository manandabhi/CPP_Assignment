#include<iostream>
using namespace std;

class Overmath
{
	public:
	void math(int a,int b)
	{
		cout<<"Addition of "<<a<<" and "<<b<<" = "<<a+b<<endl;
	}
	void math(double i,double j)
	{
		cout<<"multiplication of "<<i<<" and "<<j<<" = "<<i*j<<endl;
	}
	void math(int x,double y)
	{
		cout<<"subtraction of "<<x<<" and "<<y<<" = "<<x-y<<endl;
	}
	void math(double p,int q)
	{
		cout<<"division of"<<p<<" and "<<q<<" = "<<p/q<<endl;
	}
};

int main()
{
	Overmath m;
	m.math(22,69);
	m.math(26.29,28.26);
	m.math(50,30.25);
	m.math(60.30,30);
	
	
	return 0;
}