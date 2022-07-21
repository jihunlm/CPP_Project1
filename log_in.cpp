#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Login {
		bool result;
		string userID;
	};

auto CheckLogIn ()
{
	string userID, password, un, pw;

	cout << "Type in the User ID :\n "; 
	cin >> userID;
	cout << "Type in the Password :\n";
	cin >> password;
	
	ifstream read(userID + ".txt");
	getline(read, un);
	getline(read, pw);

	if(un == userID && pw == password) {
		return Login {true, userID};
	}
	else {
		return Login {false, userID};
	}
}

int main() {
	int choice;	

	cout << "1: Register \n 2: Login \n Your Choice : "; 
	cin >> choice;

	if (choice == 1) {
		string username, password, data;
		cout << "Select a user name :\n";
		cin >> username;
		cout << "Select a password :\n";
		cin >> password;
		cout << "Type in the information\n";
		cin.ignore();
		getline(cin, data);

		ofstream file(username + ".txt");

		file << username <<endl << password << endl << data << endl;
		file.close();

		main(); //return to main to register and login
	}
	else if(choice == 2)
	{	
		auto [status, userID] = CheckLogIn();
		if(!status) {
			cout << "False login!" << endl;
			system("PAUSE");
			return 0;
		}
		else {
			string USERID, password, data;
			cout << "Successfully logged in!" << endl;
			cout << "The data : \n";
			ifstream read (userID + ".txt");
			getline(read, USERID);
			getline(read, password);
			getline(read, data);
			cout << data << endl;
			system("PAUSE");
			return 1;
		}
	}
}

