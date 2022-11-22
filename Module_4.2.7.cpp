//Create a class person having members name and age. Derive a class student 
//having member percentage. Derive another class teacher having member 
//salary. Write necessary member function to initialize, read and write data. 
//Write also Main function (Multiple Inheritance) 
//module_4_2_7
#include<iostream>
using namespace std;

class Person
{
	string name;
	int age;
	
	public:
		void getPerson(int a,string n)
		{
			name = n;
			age = a;
		}
		void displayPerson()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"age:  "<<age<<endl;
		}
};

class Student : public Person
{
	float percentage;
	
	public:
		void getStudent(string n,int a ,float p)
		{
			percentage = p;
			getPerson(a,n);
		}
		void displayStudent()
		{
			cout<<"Student details are: \n";
			displayPerson();
			cout<<"Percentage is:  "<<percentage<<"%"<<endl;
		}
};

class Teacher : public Person
{
	float salary;
	
	public:
		void getTeacher(string n,int a,float s)
		{
			salary = s;
			getPerson(a,n);
		}
		void displayTeacher()
		{
			cout<<"Teachers details are: \n";
			displayPerson();
			cout<<"Salary:  "<<salary<<endl;
		}
};

int main()
{
	Student s;
	s.getStudent("sujal",21,78.76);
	s.displayStudent();
	Teacher t;
	t.getTeacher("mukesh sir",32,19092.34);
	t.displayTeacher();
	return 0;
}