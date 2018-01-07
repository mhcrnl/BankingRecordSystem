//
// Created by peterwest_1 on 2017/09/07.
//
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

#include "Account.h"
#include "record.h"

Account::Account(int accountNumber, string firstName, string lastName, float balance) {

    setAccountNumber(accountNumber);
    setFirstName(firstName);
    setLastName(lastName);
    setBalance(balance);
}
