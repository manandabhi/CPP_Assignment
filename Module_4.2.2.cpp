#include<iostream>
using namespace std;

class Bank

{
	protected:
	int balance=50000;
	string accnum;
	
	public:
	string acctype;
	string name;
	string bankname="HDFC";
	string ifsc="HDF00026";
	
	void value( string a,string b,string c)
	{
		acctype=c;
		name=b;
		accnum=a;
		
	}
	
	void deposit(int d)
	{	
		balance=balance+d;
		
	}
	void withdraw(int e)
	{
			if(e>balance)
		{
			cout<<"Insufficient Balance"<<endl;
		}
		else
		{
		
		balance=balance-e;
		cout<<"Withdrawal Successfull"<<endl<<"Money Withdrawn ="<<e<<endl;
		
	}
	}	
	
 	void display()
	{
		cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;//<<"Here is your Account info"<<endl;
		cout<<"Bank_Name=="<<bankname<<endl;
		cout<<"IFSC Code=="<<ifsc<<endl;
		cout<<"Name ="<<name<<endl;
	cout<<"Current Balance = "<<balance<<endl;
	}	
};
int main()
{
	Bank obj;
	int i,g,d; 
	string a,b,c;
	cout<<"Enter account number"<<endl;
	cin>>a;
	cout<<"Enter name"<<endl;
	cin>>b;
	retry:
	cout<<"Enter account Type:"<<endl<<"Enter 1 for saving or 2 for current"<<endl;
	cin>>g;
	if(g == 1)
	{
		c="Savings";
		cout<<"You have selected savings account"<<endl;
		obj.value(a,b,c);
		int j;
		cout<<"Press 0 to deposit, 1 to withdraw and 2 to View balance"<<endl;
		cin>>i;	
		if(i==0)
		{
			cout<<"Enter amount to be deposited"<<endl;
			cin>>j;
			obj.deposit(j);
			obj.display();
			
		}
		else if(i==1)
		{
			cout<<"Enter amount to be withdraw"<<endl;
			cin>>j;
			obj.withdraw(j);
		}
		else if(i==2)
		{
			cout<<"\nYour Account details is here"<<endl;
			obj.display();
		}
		else
		{
			cout<<"enter valid number "<<endl;
		}
			
	}
	else if(g == 2)
	{
		c="Current";
		cout<<"You have selected current account"<<endl;
		obj.value(a,b,c);
		int i,j;
	cout<<"Press 0 to deposit, 1 to withdraw and 2 to View balance"<<endl;
	cin>>i;	

	if(i==0)
	{
		cout<<"Enter amount to be deposited"<<endl;
		cin>>j;
		obj.deposit(j);
		obj.display();
		
	}
	else if(i==1)
	{
		cout<<"Enter amount to be withdraw"<<endl;
		cin>>j;
		obj.withdraw(j);
		obj.display();
	}
	else if(i==2)
	{
		cout<<"\nYour Account details is here"<<endl;
		obj.display();
	}

	else
	{
		cout<<"enter valid number "<<endl;
	}
	}
	else
	{
		cout<<"Enter valid number to select account type";	
	}

	return 0;
}