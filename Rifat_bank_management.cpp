#include<iostream>
#include<fstream>

using namespace std;

class Bank
{
	private:
		string name;
		float ibalance;
		float depos;
		float with;
		int pass;
		
	public:
		void menu(void);
		void getdata(void);
		void deposite(void);
		void checkbal(void);
		void withdraw(void);
		void info(void);
};
	void Bank::menu()
	{
		int num;
	cout<<"\n\tChoose your Option:(1-to-6)\n"<<endl;
	cout<<"\t1.Create An Account\n";
	cout<<"\t2.Deposite the Balance\n";
	cout<<"\t3.Check the Balance\n";
	cout<<"\t4.Withdraw the Balance\n";
	cout<<"\t5.See All Information\n";
	cout<<"\t6.Quit";
	cout<<"\t\n\t";
	cin>>num;
	switch(num)
	{
		case 1:
			getdata();
			break;
			
		case 2:
			deposite();
			break;
		
		case 3:
			checkbal();
			break;
			
		case 4:
			withdraw();
			break;
		
		case 5:
			info();
			break;
			
		default:
			break;
	}
	
	}
	
	void Bank::getdata()
	{
		int go;
		cout<<"\n\t\tEnter the Name of Depositer:";
		cin>>name;
		
        cout<<"\n\t\tDeposite the Initial Balance:";
        cin>>ibalance;

        cout<<"\n\t\tChoose your password[0-9] for secure (only 4 nos.):";
        cin>>pass;

        cout<<"\n\n\t\tAccount Has Been Successfully Created!!!\n\n";
		cout<<"\n\t\tHit \'0\' for Go to MainMenu:";
			cin>>go;
			if(go==0)
			{
				menu();
			}
	}
	
	void Bank::deposite()
	{
		int go;
		cout<<"\n\t\tHow Much Money You wanna Deposite:\t";
		cin>>depos;
		ibalance += depos;
		cout<<"\n\n\t\tYour Balance Has Been Successfully Deposite!!!\n\n";
	
	cout<<"\n\t\tHit \'0\' for Go to MainMenu:";
			cin>>go;
			if(go==0)
			{
				menu();
			}
	}
	
	void Bank::checkbal()
	{
		int passcode;
		cout<<"\n\t\tEnter your Account's Password: ";
		cin>>passcode;
		if(pass==passcode)
		{
		int go;
		cout<<"\n\t\tYour Current Balance:"<<" BDT: "<<ibalance<<"\n";
		cout<<"\n\t\tHit \'0\' for Go to MainMenu:";
			cin>>go;
			if(go==0)
			{
				menu();
			}
		}
		else
			cout<<"\n\t\tSorry You Entered Wrong Password!!TRY AGAIN@";
	}
	
	void Bank::withdraw()
	{
			int passcode;
		cout<<"\n\t\tEnter your Account's Password: ";
		cin>>passcode;
		if(pass==passcode)
		{
		int go;
		cout<<"\n\t\tHow Much Money You wanna Withdraw:";
		cin>>with;
		depos-=with;
		cout<<"\n\t\tAfter Withdraw Your Balance:"<<" Rs."<<depos<<"\n";
		cout<<"\n\t\tHit \'0\' for Go to MainMenu:";
			cin>>go;
			if(go==0)
			{
				menu();
			}
		}
		else
			cout<<"\n\t\tSorry You Entered Wrong Password!!TRY AGAIN@";
	}
	
	void Bank::info()
	{
		int passcode;
		cout<<"\n\t\tEnter your Account's Password: ";
		cin>>passcode;
		if(pass==passcode)
		{
		int go;
		cout<<"\n\t\tAll Information is Listed Below:\n";
		cout<<"\t\t\tName of the Depositer:"<<name<<"\n";
		cout<<"\t\t\tYour Current Amount:"<<depos<<"\n";
		cout<<"\n\t\tHit \'0\' for Go to MainMenu:";
			cin>>go;
			if(go==0)
			{
				menu();
			}
		}
		else
			cout<<"\n\t\tSorry You Entered Wrong Password!!TRY AGAIN@";
	}
	

int main()
{
	Bank Obj;
    Obj.menu();

	return 0;
}
