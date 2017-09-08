//
// Created by peterwest_1 on 2017/09/07.
//
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#include "Account.h"
#include "record.h"

int getNewAccountNumber(){

    int newAccountNumber = 2;

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


    return newAccountNumber;
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
        while ( getline (accountfile,line, '}') )
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
