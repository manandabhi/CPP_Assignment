//Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
#include<string.h>
using namespace std;

class Addstring
{
	char c1[30],c2[30];
	
	public:
		Addstring(char str1[],char str2[])
		{
			strcpy(c1, str1);
      		strcpy(c2, str2);
		}
		
		void operator +()
		{
			cout<<"\n conacatenation: "<< strcat(c1,c2);
		}
	
};

int main()
{
	
	char str1[30] ;
	char str2[30] ;
	
	cout<<"enter your first sitring"<<endl;
	cin>>str1;
	cout<<"enter your second sitring"<<endl;
	cin>>str2;
	
	Addstring a1(str1,str2);
	
	+a1;
	return 0;
}