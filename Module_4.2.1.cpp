//==> Wap to create simple calculator using class.

#include<iostream>
using namespace std;

class Calculator
{
	public:
		int a1,a2,c;
				
	Calculator(int a1,int a2,int c)	
	{
		switch(c)
		{
			case 1:cout<<"Addition of a1+a2="<<a1+a2<<endl;
			break;
			
			case 2:cout<<"Subtraction of a1-a2="<<a1-a2<<endl;
			break;
			
			case 3:cout<<"Multiplication of a1*a2="<<a1*a2<<endl;
			break;
			
			case 4:cout<<"Division of a1/a2="<<a1/a2<<endl;
			break;
			
			case 5:cout<<"Mode of a1%a2="<<a1%a2<<endl;
			break;
			
			default:cout<<"Enter valid number"<<endl;
			break;
		}
	}		
};
int main()
{
	int a1,a2,x;
	cout<<"Enter int number a1 and a2"<<endl;
	cin>>a1>>a2;
	cout<<"a1="<<a1<<"\na2="<<a2<<endl;
	
	cout<<"Enter your choice 1 for +,2 for -,3 for *,4 for /,5 for %"<<endl;
	cin>>x;
	
	Calculator c(a1,a2,x);
			
	return 0;
}