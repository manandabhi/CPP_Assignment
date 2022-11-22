//Assume a class cricketer is declared. Declare a derived class batsman from 
//cricketer. Data member of batsman. Total runs, Average runs and best 
//performance. Member functions input data, calculate average runs, Display 
//data. (Single Inheritance) 
#include<iostream>
using namespace std;

class Cricketer
{
	public:
		
	int total_runs=0;
	int avg_runs=0;
	int runs[5];
	string avg_performance;
		
	void inputdata()
	{
	int  i;
	cout<<"enter runs in 5 innings"<<endl;
		for(i=0;i<5;i++)
		{
			cin>>runs[i];
		}
		cout<<"enter the performance of the cricketer"<<endl;
		cin>>avg_performance;		
	}	
	void averageruns()
	{
		int i;
		for(i=0;i<5;i++)
		{
			total_runs=total_runs+runs[i];
		}
		avg_runs=total_runs/5;
	}
	void display()
	{
		cout<<"Total runs ="<<total_runs<<endl<<"Average runs = "<<avg_runs<<endl<<"Performance = "<<avg_performance<<endl;
	}
};

class Batsmen : public Cricketer
{
	public:
};
int main()
{    
	Batsmen obj;
	obj.inputdata();
	obj.averageruns();
	obj.display();
	
	return 0;
}