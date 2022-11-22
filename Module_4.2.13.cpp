#include<iostream>
using namespace std;

class Num
{
	int a1,a2;
	public:
		void val(int n1,int n2)
		{
			a1=n1;
			a2=n2;
		}
	friend void swap(Num n);
};

void swap(Num n)
{
	n.a1=n.a1+n.a2;
	n.a2=n.a1-n.a2;
	n.a1=n.a1-n.a2;
	cout<<"a1 = "<<n.a1<<"\na2 = "<<n.a2<<endl;
}

int main()
{
	Num n;
	int a1,a2;
	cout<<"enter your a1 :"<<endl;
	cin>>a1;
	cout<<"enter your a2 :"<<endl;
	cin>>a2;
	n.val(a1,a2);
	swap(n);

	return 0;
}