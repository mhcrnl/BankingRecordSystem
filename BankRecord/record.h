//
// Created by peterwest_1 on 2017/09/07.
//

#ifndef BANKINGRECORDSYSTEM_RECORD_H
#define BANKINGRECORDSYSTEM_RECORD_H

#include "Account.h"

int getNewAccountNumber();
void addAccount();
void readAccount(int accountNumber);
void searchAccount();
void deleteAccount();
Account getDetails();
void readAllData();

#endif //BANKINGRECORDSYSTEM_RECORD_H