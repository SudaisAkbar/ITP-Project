// our ATM machines contains the follwing details
//1: Check balance
//2: Cash withdraw
//3: User details
//4: Update mobile no
//5: Admin login
//6: Fast cash
//7:

# include<iostream>
# include<conio.h>
# include<string>
using namespace std;

class atm                          // class atm
{
	private :                      // private members variables
		long int account_No;
		string name;
		int PIN;
		double balance;
		string Mobile_No;

		public :                //public members functions

		// set data function is used to set the data into the private members variables
		void setdata(long int account_No_a,string name_a,int PIN_a,double balance_a,string mobile_No_a)
		{
			account_No = account_No_a;      // assiging the formal arguments to the private members variables
			name = name_a;
			PIN = PIN_a;
			balance = balance_a;
			Mobile_No = mobile_No_a;
			}
			// get Account_No  function is returning the user account no
			long int getAccountNo()
			{
				return account_No;
				}

				 // getname function is returning the users name
				 string getName()
				 {
					return name;
				  }
				 // getpin functions is used to returning the users pin
				  int getPIN()
				  {
					return PIN;
				   }
				 // getbalance functions is returning the bank balance of users
				 double getBalance()
				 {
					return balance;
				 }
				 // getMobileNo function is returning the users mobile no
				  string getMobileNo()
				 {
					return Mobile_No;
				 }
				  // setMobile function is updating the user mobile number
				  void getMobile(string mob_prev,string mob_new)
				  {
					if(mob_prev == Mobile_No)      // it will check the old mobile number
					{
						Mobile_No = mob_new;        // update with the new , if matches
						  cout<<endl<<"sucessfully updated Mobile No :";
						 _getch();        // getch is to hold the screen (until the press sny key)

					  }
					  else                      // does not update if old mobile no does not matches
					  {
						cout<<"Incorrect !!! old Mobile No"<<endl;
						_getch();
					  }
				  }

				 // cashWithDraw function is used to with draw money from atm
				void cashWithDraw(int amount_a)
				{
					if ( amount_a> 0 && amount_a < balance)   // check entered amount validity
					{
						balance = balance - amount_a;     // removing the money from total balnce
						cout<<"please collect your cash :"<<endl;
						cout<<"Avalible balance in account is :"<<balance<<endl;
						_getch();

					}
					else
					{
						cout<<"invalid input or insufficient balance :"<<endl;
						_getch();
					}
				}
			};

			/////////////////////////////////////////////////////////////
int main()
{
	int choice = 0;
	int enterPIN;     // enter pin and accountno for user authentications
	long int enterAccountNo;
	string adminname;
	int  adminpasword;
	string name;
	int password, amountdeposit;



	system("cls");

	// created user (object)

	atm user1;
	// set user details (into objects)

	user1.setdata(1234567, "sudais", 1111, 50000, "03149828884");   // setting deafault data


	do
	{
		system("cls");     // clear the screen

		cout << "******  welcome to ATM ******" << endl;
		cout << "Enter Account No " << endl;
		cin >> enterAccountNo;

		cout << "Enter PIN  " << endl;
		cin >> enterPIN;

		// check whether enter values matches with users details
		if ((enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPIN()))
		{
			do
			{
				int amount = 0;
				string oldMobileNo, newMobileNo;

				system("cls");
				//user interface
				cout << "***** welcome to ATM ******" << endl;
				cout << "Select options :" << endl;
				cout << "press 1 to check Balance :" << endl;
				cout << "press 2 to  cash withdraw :" << endl;
				cout << "press 3 to show user details :" << endl;
				cout << "press 4 to update Mobile No :" << endl;
				cout << "press 5 to Exists :" << endl;
				cout << "press 6 for admin login :" << endl;
				cout << "press 7 for fast  cash :" << endl;
				cin >> choice;

				switch (choice)
				{
				case 1:
					cout << "Your Bank Balance  is :" << user1.getBalance() << endl;
					_getch();
					break;

				case 2:
					cout << "Enter Amount :" << endl;
					cin >> amount;

					user1.cashWithDraw(amount); // calling cashwith draw function
												// passing the with draw amount
					break;

				case 3:
					cout << "*** User Details are :- " << endl;
					cout << " Account No is :" << user1.getAccountNo() << endl;
					cout << " Name is :" << user1.getName() << endl;
					cout << " Balnce is :" << user1.getBalance() << endl;
					cout << " Mobile No is :" << user1.getMobileNo() << endl;

					_getch();
					break;
				case 4:
					cout << " Enter Old Mobile No :" << endl;
					cin >> oldMobileNo;
					cout << "Enter New Mobile No :" << endl;
					cin >> newMobileNo;

					user1.getMobile(oldMobileNo, newMobileNo);// now set new mobile number

					break;
				case 6:
					cout << "press 6 for admin login :" << endl;
					cout << "enter name of admin :" << endl;
					cin >> adminname;
					cout << "enter password to login :" << endl;
					cin >> adminpasword;
					if (adminname == "sudais" && adminpasword == 1234)
					{
						int choice=0;
						switch (choice)
						{
						case 1:
							cout << "press 1 for user details :" << endl;
							cout << user1.getName() << endl;
							cout << user1.getPIN() << endl;
							cout << user1.getAccountNo() << endl;
							cout << user1.getBalance() << endl;
							break;
						case 2:
							cout << "press 2 for add user :" << endl;
							cout << "enter name of user :" << endl;
							cin >> name;
							cout << "enter amount to deposit :" << endl;
							cin >> amountdeposit;
							cout << "enter pasword :" << endl;
							cin >> password;
						}
						}
				case 5:
					exit(0);  // exit application

				default:          // handle invalid input
					cout << "Enter valid Data !!!" << endl;
					}

				} while (1);  // menu     // condition will always true and loop is capable of running infinite times
			}




		}while (1);

	}