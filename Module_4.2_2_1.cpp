//Write a program of to swap the two values using templates
#include<iostream>
using namespace std;

template<class Ap> 
class Swap
{
	private:
		Ap n1,n2;
	public:
		
		Ap swap(Ap x,Ap y)
		{
			n1=x;
			n2=y;
			Ap n3;
			
			n3=n1;
			n1=n2;
			n2=n3;
			
			cout<<"After swapping num1 = "<<n1<<" and num2 = "<<n2<<endl;
			return 0;
		}	
};
int main()
{
	Swap <int>a1;
	Swap <float>a2;
	a1.swap(10,20);
	a2.swap(20.5,15.6);
	return 0;
}