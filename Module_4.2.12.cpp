// Write a program to calculate the area of circle, rectangle and triangle using 
//Function Overloading 
// Rectangle: Area * breadth 
// Triangle: ½ *Area* breadth 
// Circle: Pi * Area *Area

#include<iostream>
using namespace std;

class Area
{
	public:
		void area1(int a1,int a2)
		{
			cout<<"Area of rectangle with height "<<a1<<" and breadth "<<a2<<" is "<<a1*a2<<endl;
		}
		
		void area2(double a1, float a2)
		{
			
			cout<<"Area of triangle with height "<<a1<<" and breadth "<<a2<<" is "<<0.5*a1*a2<<endl;
		}
		
		void area3(float a1)
		{
			
			cout<<"Area of circle with radius "<<a1<<" is "<<3.14*a1*a1<<endl;
		}
};

int main()
{
	int a1,a2;
	cout<<"Enter any num a1"<<endl;
	cin>>a1;
	cout<<"Enter any num a2"<<endl;
	cin>>a2;
	Area obj;
	obj.area1(a1,a2);
	obj.area2(a1,a2);
	obj.area3(a1);
	return 0;
} 