// Write a program to find the max number from given two numbers using friend function.

#include<iostream>
using namespace std;

class Number
{
	int a1,a2;
	public:
		void value(int n1,int n2)
		{
			a1=n1;
			a2=n2;
		}
	friend void max(Number n);
};
void max(Number n)
{
	if(n.a1>n.a2)
	{
		cout<<"a1 greater than a2\na1= "<<n.a1<<endl;
	}
	else if(n.a2>n.a1)
	{
		cout<<"a2 greater than a1\na2= "<<n.a2<<endl;
	}
	else if(n.a1==n.a2)
	{
		cout<<"This is equal number"<<endl;
	}	
}
int main()
{
	Number n;
	int a1,a2;
	cout<<"enter num a1 :"<<endl;
	cin>>a1;
	cout<<"enter num a2 :"<<endl;
	cin>>a2;
	n.value(a1,a2);
	max(n);
	return 0;
}