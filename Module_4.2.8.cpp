/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students.*/
#include<iostream>
using namespace std;

class Students
{
	protected:
    	int roll_no;
	public:
		void roll(int i)
		{
			roll_no=i;
			cout<<"Roll no = "<<roll_no<<endl;
		}
};

class Test : public Students
{
	protected:
		int marks1,marks2;
	public:
		void marks(int a,int b)
		{
			marks1=a;
			marks2=b;
			cout<<"Maths = "<<marks1<<endl<<"Science = "<<marks2<<endl;
		}	
	
};

class Result : public Test
{
	
	public:
		void Tmarks()
		{
			cout<<"Total marks = "<<marks1+marks2<<endl;
		}
};

int main()
{
	Result obj;
	int i,a,b;
	cout<<"Enter roll no:"<<endl;
	cin>>i;
	cout<<"Enter marks in Maths then enter marks in Science :"<<endl;
	cin>>a>>b;
	obj.roll(i);
	obj.marks(a,b);
	obj.Tmarks();
	return 0;
}