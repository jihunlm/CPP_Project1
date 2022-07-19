#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool CheckLogIn ()
{
	string userID, password, un, pw;
	

	cout << "Type in the User ID"; 
	cin >> userID;
	cout << "Type in the Password";
	cin >> password
	
	ifstream read("Project_2//" + useID + ".txt");
	getline(read, un);
	getlint(read, pw);

	if(un == userID) && pw == password) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	
