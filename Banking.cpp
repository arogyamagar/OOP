#include<iostream>
using namespace std;
class Account{
	int account_no;
	char acc_hold_name[50];
	int balance;
	public:
		void create_account()
		{
			cout<<"Type your account number: ";
			cin>>account_no;
			cout<<"Your Name:";
			cin>>acc_hold_name;
			balance=0;
		}
		void deposit(int deep)
		{
			balance+=deep;
		}
		void withdraw(int withdr)
		{
			
			if(balance>withdr)
			{
				balance=balance-withdr;
			}
			else
			cout<<"Balance not enough";
		}
		void balance_inquery()
		{
			cout<<"You current balance is"<<balance;
		}
};
int main()
{
	Account a;
	int i;
	a.create_account();
	cout<<"\nPress\n1 To Deposit Money\n2 To Withdraw Money\n3 To Check Your Balance\n4 To Exit\n";
	cin>>i;
	while(i!=4)
	{
		if(i==1)
		{
		
			int deep;
			cout<<"Amount to be deposited: ";
			cin>>deep;
			a.deposit(deep);
			cout<<"\nPress\n1 To Deposit Money\n2 To Withdraw Money\n3 To Check Your Balance\n4 To Exit\n";
				cin>>i;
		}
	
	else if(i==2)
		{	
			int withdr;
			cout<<"Amount to be withdrawn: ";
			cin>>withdr;
			a.withdraw(withdr);
			cout<<"\nPress\n1 To Deposit Money\n2 To Withdraw Money\n3 To Check Your Balance\n4 To Exit\n";
				cin>>i;
		}
	else if(i==3)
	{
		a.balance_inquery();
		cout<<"\nPress\n1 To Deposit Money\n2 To Withdraw Money\n3To Check Your Balance\n4 To Exit\n";
		cin>>i;
	}
	else if(i==4)
	exit(0);
	else
		{
	
			cout<<"Invalid Input";
			cout<<"\nPress\n1 To Deposit Money\n2 To Withdraw Money\n3 To Check Your Balance\n4 To Exit\n";
			cin>>i;
		}
	};
	return 0;
}
