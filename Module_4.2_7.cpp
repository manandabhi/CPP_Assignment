/*Create a class person having members name and age. Derive a class studentv having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance) */
#include<iostream>
using namespace std;

class person
{
	protected:
		int age;
		string name;
};

class students
{
	protected:
		float percentage;
};

class teacher:public person, public students
{
	public:
	int salary;
	
	void school(int a1, int a2,string s, float a3)
	{
		age=a1;
		salary=a2;
		name=s;
		percentage=a3;
		
	}
	 
	void dis()
	{
		cout<<"NAME = "<<name<<endl<<"Age = "<<age<<endl;
		cout<<"Salary = "<<salary<<endl<<"student percentage = "<<percentage<<endl;
		
	} 

};

int main()
{
	teacher obj;
	int a,b;
	float c;
	string d;
	cout<<"Enter your name"<<endl;
	cin>>d;
	cout<<"Enter your age"<<endl;
	cin>>a;
	cout<<"Enter your Salary"<<endl;
	cin>>b;
	cout<<"Enter your Student's percentage"<<endl;
	cin>>c;
	obj.school(a,b,d,c);
	obj.dis();
  return 0;
}