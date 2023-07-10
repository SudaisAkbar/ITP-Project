#include <iostream> 
#include <string>
#include <fstream> // for file handling
int account_balance = 0;

using namespace std;

class user
 {
private:
	int s;
public:

	void display()  // user manu function
	 {
		string to_edit[8];
		cout << "Welcome to user:";
		cout << "\nPress 1 for Deposit cash\n";
		cout << "Press 2 for cash Withdrawal\n";
		cout << "Press 3 Balance Inquiry\n";
		cout << "Press 4 for Money Transfer\n";
		cout << "Enter: ";
		cin >> s;

		switch (s)
		{
		case 1:
		{
			int temp_amount;
			string temp2;
			cout << "Enter Account Number: ";
			cin >> temp2;
			cout << "Enter how much amount you want to deposit? : ";
			cin >> temp_amount;
			temp2 += ".txt";
			ifstream myfile(temp2);
			string temp_in;
			int count = 0;
			while (getline(myfile, temp_in))
			{

				to_edit[count] = temp_in;
				count++;
			}
			to_edit[0] = to_edit[0].substr(17);
			to_edit[1] = to_edit[1].substr(17);
			to_edit[2] = to_edit[2].substr(17);
			to_edit[3] = to_edit[3].substr(17);
			to_edit[4] = to_edit[4].substr(17);
			to_edit[5] = to_edit[5].substr(17);
			int temp;
			to_edit[6] = to_edit[6].substr(17);
			temp = stoi(to_edit[6]);
			temp += temp_amount;
			to_edit[6] = to_string(temp);
			ofstream user_file(temp2);
			user_file << "Account Number = " << to_edit[0] << "\nFull Name      = " << to_edit[1] << "\nPhone Number   = " << to_edit[2] << "\nEmail          = " << to_edit[3] << "\nAddress        = " << to_edit[4] << "\nCNIC Number    = " << to_edit[5] << "\nAcc Balance    = " << to_edit[6] << "\n\t(Sudais & Talha)";
			cout << "Amount successfully Deposited!\n";
			break;
		}

		case 2:
		{
			int temp_amount;
			string temp2;
			cout << "Enter Account Number: ";
			cin >> temp2;
			cout << "Enter how much amount you want to withdraw? : ";
			cin >> temp_amount;
			temp2 += ".txt";
			ifstream myfile(temp2);
			string temp_in;
			int count = 0;
			while (getline(myfile, temp_in))
			{

				to_edit[count] = temp_in;
				count++;
			}
			to_edit[0] = to_edit[0].substr(17);
			to_edit[1] = to_edit[1].substr(17);
			to_edit[2] = to_edit[2].substr(17);
			to_edit[3] = to_edit[3].substr(17);
			to_edit[4] = to_edit[4].substr(17);
			to_edit[5] = to_edit[5].substr(17);
			int temp;
			to_edit[6] = to_edit[6].substr(17);
			temp = stoi(to_edit[6]);
			temp -= temp_amount;
			to_edit[6] = to_string(temp);
			ofstream user_file(temp2);
			user_file << "Account Number = " << to_edit[0] << "\nFull Name      = " << to_edit[1] << "\nPhone Number   = " << to_edit[2] << "\nEmail          = " << to_edit[3] << "\nAddress        = " << to_edit[4] << "\nCNIC Number    = " << to_edit[5] << "\nAcc Balance    = " << to_edit[6] << "\n\t(Sudais & Talha)";
			cout << "Amount Successfully Withdrawal\n";
			break;
		}

		case 3:
		{

			string temp2;
			cout << "Enter Account Number: ";
			cin >> temp2;
			temp2 += ".txt";
			ifstream myfile(temp2);
			string temp_in;
			int count = 0;
			while (getline(myfile, temp_in))
			{

				to_edit[count] = temp_in;
				count++;
			}

			cout << to_edit[6] << endl;
			cout << "Thanks\n";
			break; }
		case 4:
		{
			int temp_amount;
			string temp2;
			cout << "Enter Account Number: ";
			cin >> temp2;
			cout << "Enter reciever Account: ";
			string temp_r;
			cin >> temp_r;
			cout << "Enter how much amount you want to send? : ";
			cin >> temp_amount;
			temp2 += ".txt";
			ifstream myfile(temp2);
			string temp_in;
			int count = 0;
			while (getline(myfile, temp_in))
			{

				to_edit[count] = temp_in;
				count++;
			}
			to_edit[0] = to_edit[0].substr(17);
			to_edit[1] = to_edit[1].substr(17);
			to_edit[2] = to_edit[2].substr(17);
			to_edit[3] = to_edit[3].substr(17);
			to_edit[4] = to_edit[4].substr(17);
			to_edit[5] = to_edit[5].substr(17);
			int temp;
			to_edit[6] = to_edit[6].substr(17);
			temp = stoi(to_edit[6]);
			temp -= temp_amount;
			to_edit[6] = to_string(temp);
			ofstream user_file(temp2);
			user_file << "Account Number = " << to_edit[0] << "\nFull Name      = " << to_edit[1] << "\nPhone Number   = " << to_edit[2] << "\nEmail          = " << to_edit[3] << "\nAddress        = " << to_edit[4] << "\nCNIC Number    = " << to_edit[5] << "\nAcc Balance    = " << to_edit[6] << "\n\t(Sudais & Talha)";
			cout << "Amount Successfully transfered\n";
			break;
		}


		}
	}

};
class admin   // admin class
{
private:      // mambers variables of admin class
	string f_name;
	string s_name;
	string address;
	string cnic_number;
	string phone;
	string email;
	string account_no;
	string temp;
	string to_edit[8];

public:
	void small_menu()  // admin  acess function  which they can control on user manu
	{
		int t;
		cout << "Welcome\n";
		cout << "Press 1 for Add User\nPress 2 View User details\nPress 3 for Edit User\nPress 4 Delete user\n";
		cout << "Enter: ";
		cin >> t;
		switch (t)     // choice of the admin what they want to do
		{
		case 1:
		{
			int time;
			srand(time(0));
			int temp1;
			int temp2;
			temp1 = 55555 + rand() % 1231;
			temp2 = 55555 + rand() % 1231;
			string wd;
			wd = to_string(temp1) + to_string(temp2);  // both names are displayed with the addition
			account_no = wd;
			cout << "Enter First Name: ";
			getline(cin >> ws, f_name);
			cout << "Enter Second Name: ";
			getline(cin >> ws, s_name);
			cout << "Enter Address: ";
			getline(cin >> ws, address);
			cout << "Enter Phone No: ";
			cin >> phone;
			cout << "Enter Email: ";
			cin >> email;
			do {
				cout << "Enter CNIC_ Number: ";
				cin >> cnic_number;
			} while (cnic_number.length() != 13);
			string t2 = account_no;
			t2 += ".txt";

			ofstream user_file(t2);
			user_file << "Account Number = " << account_no << "\nFull Name      = " << f_name << " " << s_name << "\nPhone Number   = " << phone << "\nEmail          = " << email << "\nAddress        = " << address << "\nCNIC Number    = " << cnic_number << "\nAcc Balance    = " << account_balance << "\n\t(Sudais & Talha)";
			user_file.close();
			cout << "User Successfully registered\n";
			break;
		}
		case 2:
		{

			cout << "Enter Account Number for Data: ";
			cin >> temp;
			temp += ".txt";
			string temp_in;
			ifstream myfile(temp);
			while (getline(myfile, temp_in))
			{
				cout << temp_in << endl;
			}
			cout << "This was user's inquiry\n";
			break;
		}
		case 3:
		{
			cout << "Enter Account Number for Edit data: ";
			cin >> temp;
			temp += ".txt";

			string temp_in;
			int count = 0;
			ifstream myfile(temp);

			while (getline(myfile, temp_in))
			{
				cout << temp_in << endl;
				to_edit[count] = temp_in;
				count++;
			}
			string change;
			int temp23;
			cout << "What you want to edit? : \n";
			cout << "Press 1 for Phone Number: \n";
			cout << "Press 2 for Email Address: \n";
			cout << "Press 3 for Address: \n";
			cout << "Enter: ";
			cin >> temp23;
			switch (temp23)
			{
			case 1:
			{
				string temp2;
				cout << "Enter Number: ";
				cin >> temp2;
				to_edit[0] = to_edit[0].substr(17);
				to_edit[1] = to_edit[1].substr(17);
				to_edit[2] = temp2;
				to_edit[3] = to_edit[3].substr(17);
				to_edit[4] = to_edit[4].substr(17);
				to_edit[5] = to_edit[5].substr(17);
				to_edit[6] = to_edit[6].substr(17);
				ofstream user_file(temp);
				user_file << "Account Number = " << to_edit[0] << "\nFull Name      = " << to_edit[1] << "\nPhone Number   = " << to_edit[2] << "\nEmail          = " << to_edit[3] << "\nAddress        = " << to_edit[4] << "\nCNIC Number    = " << to_edit[5] << "\nAcc Balance    = " << to_edit[6] << "\n\t(Sudais & Talha)";
				cout << "Phone number successfully changed\n";
				break; }
			case 2:
			{
				{string temp2;
				cout << "Enter Email: ";
				cin >> temp2;
				to_edit[0] = to_edit[0].substr(17);
				to_edit[1] = to_edit[1].substr(17);
				to_edit[2] = to_edit[2].substr(17);
				to_edit[3] = temp2;
				to_edit[4] = to_edit[4].substr(17);
				to_edit[5] = to_edit[5].substr(17);
				to_edit[6] = to_edit[6].substr(17);
				ofstream user_file(temp);
				user_file << "Account Number = " << to_edit[0] << "\nFull Name      = " << to_edit[1] << "\nPhone Number   = " << to_edit[2] << "\nEmail          = " << to_edit[3] << "\nAddress        = " << to_edit[4] << "\nCNIC Number    = " << to_edit[5] << "\nAcc Balance    = " << to_edit[6] << "\n\t(Sudais & Talha)"; }
				cout << "Email successfully changed\n";
				break;
			}
			case 3:
			{
				string temp2;
				cout << "Enter Address: ";
				getline(cin >> ws, temp2);
				to_edit[0] = to_edit[0].substr(17);
				to_edit[1] = to_edit[1].substr(17);
				to_edit[2] = to_edit[2].substr(17);
				to_edit[3] = to_edit[3].substr(17);
				to_edit[4] = temp2;
				to_edit[5] = to_edit[5].substr(17);
				to_edit[6] = to_edit[6].substr(17);
				ofstream user_file(temp);
				user_file << "Account Number = " << to_edit[0] << "\nFull Name      = " << to_edit[1] << "\nPhone Number   = " << to_edit[2] << "\nEmail          = " << to_edit[3] << "\nAddress        = " << to_edit[4] << "\nCNIC Number    = " << to_edit[5] << "\nAcc Balance    = " << to_edit[6] << "\n\t(Sudais & Talha)";
				cout << "Address successfully chnaged\n";
				break;
			}
			}
			break;

		}
		case 4:
		{


			int status;
			char fileName[15];
			cout << "Enter the Name of File: ";
			cin >> fileName;
			status = remove(fileName);
			if (status == 0)
				cout << "\nFile Deleted Successfully!";
			else
				cout << "\nError Occurred!";
			cout << endl;
			break;
		}

		}
	}
};
class main_m    // main manu class for user and admin
{
private:
	user u;
	admin a;
public:
	void selection(int sel) {
		if (sel == 1)
		{

			u.display();
		}
		if (sel == 2)
		{
			string username, password;
			do {
				cout << "Enter Username: ";
				cin >> ws >> username;
				cout << "Enter Password: ";
				cin >> ws >> password;
				if (username == "admin" && password == "admin")
				{
					a.small_menu();
				}
				else
					cout << "Username or Password Incorrect!\n";
			} while (username != "admin" && password != "admin");

		}
	}



};
int main()
{
	main_m m;
	int selection2;
	cout << "Welcome to sudais and talha ATM Machine\n";
	cout << "Press 1 for User\n";
	cout << "Press 2 for Admin\n";
	cout << "Enter: ";
	cin >> selection2;
	m.selection(selection2);

	return 0;
}