//
// Created by peterwest_1 on 2017/09/07.
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Account.h"
#include "record.h"

int getNewAccountNumber(){

	unsigned int returnValue = 0;

    std::ifstream infile ("account.txt", ios::in);
	vector<string> data; 
	vector<string> accountNumbers;

    string line= "";
    if(infile.is_open()){
        while(getline (infile,line))
        {
			if(line.find("accountNumber") != string::npos)
			{
				data.push_back(line.substr(15, 3));
			}
        }
        infile.close();
    }else {
        cout << "File could not be opened";
    }
	
	for (unsigned int i = 0; i < data.size(); i++)
	{
		int pos = data.at(i).find(',');
		accountNumbers.push_back(data.at(i).substr(0, (pos)));
	}

	for (unsigned int j = 0; j < accountNumbers.size(); j++)
	{
		if (stoi(accountNumbers.at(j)) != (j + 1))
		{
			for(unsigned int k = 0; k < accountNumbers.size(); k++)
			{
				if(stoi(accountNumbers.at(j)) != stoi(accountNumbers.at(k)))
				{
					returnValue = j + 1;
				}
			}
		}
	}

	if (returnValue == 0)
	{
		returnValue = accountNumbers.size() + 1;
	}

    return returnValue;
}

void addAccount(){

    Account account = getDetails();

    std::ofstream outfile ("account.txt", ios::app);

    if(outfile.is_open()){
        outfile << "{" << endl;
        outfile << "\taccountNumber:" << account.getAccountNumber() << "," << endl;
        outfile << "\tfirstName:" << account.getFirstName() << "," << endl;
        outfile << "\tlastName:" << account.getLastName() << ","<< endl;
        outfile << "\taccountBalance:" << account.getBalance() << endl;
        outfile << "}" << endl;

        outfile.close();
    }else {
        cout << "File could not be opened";
    }
}

void readAccount(int accountNumber){

    std::ifstream infile ("account.txt", ios::in);

    string line= "";
    if(infile.is_open()){
        while ( getline (infile,line) )
        {
            cout << line << '\n';
        }
        infile.close();
    }else {
        cout << "File could not be opened";
    }
}

void searchAccount(){

    std::ifstream accountfile ("account.txt", ios::in);
    string line = "";
    int accountNumber= 0;

    if(accountfile.is_open()){
        while ( getline (accountfile,line) )
        {
            cout << line << '\n';
        }
        accountfile.close();
    }else {
        cout << "File could not be opened" << endl;
    }

    cout << "File to be read: ";
    do{
        cin >> accountNumber;
    }while (accountNumber < 1);

    cout << endl << endl;
    readAccount(accountNumber);

}

void deleteAccount(){

	int accountNumber = 0;
	string line = "";

	do{
		cout << "Enter account number: ";
		cin >> accountNumber;
	} while (accountNumber < 1);


	string selectedFile = "accountNumber:" + to_string(accountNumber);
	cout << "selectedFile: " << selectedFile << endl;

	vector<string> data;
	std::ifstream infile("account.txt", ios::in);

	if (infile.is_open()) {
		while(getline(infile, line))
		{
			if (line.find(selectedFile) != string::npos)
			{
				cout << "selected file found" << endl;
				cout << line.find(selectedFile) << endl;
				break;
			}else
			{
				cout << "Account could not be found" << endl;
			}
		}
		infile.close();
	}
	else {
		cout << "File could not be opened";
	}
}

Account getDetails(){

    string firstName;
    string lastName;
    float balance;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout <<"Enter your last name: ";
    cin >> lastName;

    cout <<"Enter your balance: ";
    cin >> balance;

    Account account(getNewAccountNumber(), firstName, lastName, balance);
    return account;
}

void readAllData()
{
	std::ifstream accountfile("account.txt", ios::in);
	string line = "";
	vector<string> data;

	if(accountfile.is_open()) {
		while (getline(accountfile, line))
		{
			data.push_back(line);
		}
		accountfile.close();
	}
	else {
		cout << "File could not be opened" << endl;
	}

	std::ofstream outfile("account_test.txt", ios::out);
	int accountNumber = 2;
	int pos = 0;
	string selectedFile = "accountNumber:" + to_string(accountNumber);

	cout << selectedFile << endl;
	cout << data.size() << endl;
	if (outfile.is_open()) {		
		for(unsigned int i = 0; i < data.size(); i++)
		{
			if (data.at(i).find(selectedFile) != string::npos)
			{
				data.erase(data.begin() + i - 1, data.begin() + i +5);
				break;
			}
		}
		outfile.close();
	}
	else {
		cout << "File could not be opened";
	}

	for (unsigned int k = 0; k < data.size(); k++)
	{
		cout << data.at(k) << endl;
		outfile << data.at(k) << endl;
	}
}