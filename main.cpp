#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

#include "Account.h"
#include "record.h"

using namespace std;

int main() {
	readAllData();

	int pause = 0;
	cin >> pause;	

	return 0;
}

/*
int main()
{
	std::cout << "Welcome to the Account Information System" << std::endl;

	getNewAccountNumber();

	int userInput = 0;
	int systemPause = 0;

	do {
		cout << "Select one option below:" << endl;

		cout << "\t\t1: Add record to file" << endl;
		cout << "\t\t2: Show record from file" << endl;
		cout << "\t\t3: Search record from file" << endl;
		cout << "\t\t4: Update record" << endl;
		cout << "\t\t5: Delete record" << endl;
		cout << "\t\t6: QUIT" << endl << endl;

		cout << "Enter your choice: ";
		cin >> userInput;

	} while ((userInput < 1 || userInput > 6)); \

		switch (userInput) {
		case 1:
			cout << "1: Add record to file" << endl;
			addAccount();
			break;
		case 2:
			cout << "2: Show record from file" << endl << endl;
			break;
		case 3:
			cout << "3: Search record from file" << endl;
			searchAccount();
			break;
		case 4:
			cout << "4: Update record" << endl;
			break;
		case 5:
			cout << "5: Delete record" << endl;
			deleteAccount();
			break;
		case 6:
			cout << "6: QUIT" << endl;
			break;
		default:
			cout << "Default Reached:" << endl;
		}

	cout << "Press any button to continue: ";
	cin >> systemPause;

	return 0;
}

*/