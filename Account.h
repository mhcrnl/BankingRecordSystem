//
// Created by peterwest_1 on 2017/09/07.
//

#ifndef BANKINGRECORDSYSTEM_ACCOUNT_H
#define BANKINGRECORDSYSTEM_ACCOUNT_H
using namespace std;

class Account {

public:
    //constructor
    Account(int accountNumber, string firstName, string lastName, float balance);

    //getter
    int getAccountNumber(){
        return this->accountNumber;
    }

    string getFirstName(){
        return this->firstName;
    }

    string getLastName(){
        return this->lastName;
    }

    float getBalance(){
        return this->balance;
    }

    //setter
    void setAccountNumber(int accountNumber){
        this->accountNumber = accountNumber;
    }

    void setFirstName(string firstName){
        this->firstName = firstName;
    }

    void setLastName(string lastName){
        this->lastName = lastName;
    }

    void setBalance(float balance){
        this->balance = balance;
    }

private:
    int accountNumber;
    string firstName;
    string lastName;
    float balance;
protected:

};

#endif //BANKINGRECORDSYSTEM_ACCOUNT_H
