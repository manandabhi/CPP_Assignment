#include<iostream>
#include<ctime>
using namespace std;

class Atm
{
	
	private:
		int balance=20000;
		
	public:
		string name[20],address[20],location[10];
		int accnum,withdraw,Deposite;
		int num;
		
		Atm()
		{
			

		cout<<"******************************* WELCOME  TO  ATM *******************************"<<endl;
		cout<<"                          -------------------------                           "<<endl<<endl;
		
		time_t now = time(0);
		char* date = ctime(&now);
		
		cout<<"                     Current date :" <<date<<endl;  
		cout<<"                          -------------------------                           "<<endl;
		
		cout<<"*********************************************************************************************"<<endl<<endl;
		
		cout<<"       Press 1 and Then Press Enter to Access Your Account Via Pin NUmber"<<endl<<endl;
		
		cout<<"                                  or                                     "<<endl<<endl;
		
		cout<<"       Press 0 And Press Enter to get Help."<<endl;
		
		}
		
	void choice()
	{
		string a,b,c;
		cin>>num;
		switch(num)
		{
			case 1:
			cout<<"******************************* ATM ACCOUNT DEPOSIT SYSTEM *******************************"<<endl<<endl<<endl;
			cout<<"The Names of the Account Holders are : ";
			cin>>a;
			cout<<endl;
			cout<<"        The Account Holders' address is :";
			cin>>b;
			cout<<endl;
			cout<<"        The Branch location is :";			 
			cin>>c;
			cout<<endl;
			cout<<"Account number: ";
			cin>>accnum;
			cout<<endl;
			cout<<"*********************************************************************************************"<<endl<<endl;
			
			cout<<"Present available balance :Rs. ";
			cout<<balance<<endl<<endl;
			
			cout<<"Enter the Amount to be Deposited : Rs.";
			cin>>Deposite;				
			balance=balance+Deposite;
			cout<<endl;
						
			cout<<"Your new Available Balanced Amount is Rs. "<<balance;
			cout<<endl<<endl;
			cout<<"              Thank you!       "<<endl;
			break;	
			
			case 2:
				cout<<"******************************* ATM ACCOUNT WITHDRAWAL *******************************"<<endl<<endl<<endl;
				cout<<"The Names of the Account Holders are : ";
			cin>>a;
			cout<<endl;
			cout<<"        The Account Holders' address is :";
			cin>>b;
			cout<<endl;
			cout<<"        The Branch location is :";			 
			cin>>c;
			cout<<endl;
			cout<<"Account number: ";
			cin>>accnum;
			cout<<endl;
			cout<<"*********************************************************************************************"<<endl<<endl;
		
			cout<<"Enter the Amount to be Withdraw : Rs.";
			cin>>withdraw;
			if(withdraw>balance)
			{
				cout<<"Insuffucient Available Balance in your account."<<endl<<endl;
				cout<<"Sorry !!"<<endl;

			}
			else
			{
				balance=balance-withdraw;
				cout<<endl<<"After withdraw your balance Rs. "<<balance<<endl;
			}
			
			break;
			
			case 3:
				cout<<"******************************* Balance Inquiry *******************************"<<endl<<endl<<endl;
				cout<<"Your available balance :Rs. ";
				cout<<balance;
			break;
			
			case 4:
				default:
				break;
			
		}
	}
};


int main()
{
	Atm a;
	int ch;
	int pin;
	int num;
	
	cin>>ch;
		if(ch==1)
		{
			cout<<"******************************* WELCOME  TO  ACCESS *******************************"<<endl<<endl<<endl;
			
			cout<<"Enter Your Acc Pin Access Number! [Only one attempt is allowed]"<<endl<<endl;
			
			cout<<"*********************************************************************************************"<<endl<<endl;
			cin>>pin;
			if(pin==2580)
			{
				cout<<"******************************* THANK YOU *******************************"<<endl<<endl<<endl;
				
				cout<<"                  Enter [1] To Deposit Cash "<<endl;		
				cout<<"                  Enter [2] To Withdraw Cash "<<endl;	
				cout<<"                  Enter [3] To Balance Inquiry "<<endl;	
				cout<<"                  Enter [4] To Exit ATM "<<endl<<endl;
				
				cout<<"          PLEASE ENTER A SELECTION AND PRESS RETURN KEY: "<<endl<<endl;
				cout<<"*********************************************************************************************"<<endl<<endl;	
				a.choice();
					
		
			}
			else
			{
				cout<<"******************************* THANK YOU *******************************"<<endl<<endl<<endl;
				
				cout<<"You had made your attempt which failed!!! no More attempts allowed!! Sorry!!"<<endl<<endl;					
			
				cout<<"*********************************************************************************************"<<endl<<endl;
			}		
		}
		else if(ch==0)
		{
			cout<<"******************************* WELCOME  TO  ACCESS *******************************"<<endl<<endl<<endl;
			
			cout<<"      You must have the correct pin number to access this account. See your    "<<endl<<endl;
			cout<<"       Bank representative for assistance during bank opening hours           "<<endl<<endl;
			cout<<"              Thanks for, Your choice today!!                                 "<<endl<<endl;
			
			cout<<"******************************* WELCOME  TO  ACCESS *******************************"<<endl<<endl<<endl;
		}
		else
		{
			cout<<"Inavlid choice"<<endl<<endl;
		Atm a;	
		}
			
		

		return 0;
}