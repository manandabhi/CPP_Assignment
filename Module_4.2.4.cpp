#include<iostream>
using namespace std;

class math
{
	public:
		
		void mat(int a, int b)
		{
			
			cout<<"Addition of "<<a<<" and "<<b<<" = "<<a+b<<endl;
		}
		void mat(int x,double y)
		{
			cout<<"Subtraction of "<<x<<" and "<<y<<" = "<<x-y<<endl;
		}
		void mat(double i, double j)
		{
			cout<<"Multiplication of "<<i<<" and "<<j<<" = "<<i*j<<endl;
		}
		void mat(double p, int q)
		{
			
			cout<<"Division of "<<p<<" and "<<q<<" = "<<p/q<<endl;
}
};

int main()
{
	int a,b,x,q;
	double y,i,j,p;
	cout<<"enter a,b values"<<endl;
	cin>>a>>b;
		cout<<"enter x,y values"<<endl;
	cin>>x>>y;
		cout<<"enter i,j values"<<endl;
	cin>>i>>j;
		cout<<"enter p,q values"<<endl;
	cin>>p>>q;
	math obj;
	obj.mat(a,b);
	obj.mat(x,y);
	obj.mat(i,j);
    obj.mat(p,q);
	return 0; 
}