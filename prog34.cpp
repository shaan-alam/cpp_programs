#include <iostream>
using namespace std;

class Bank {
  private: 
    int acc_no;
    double balance;

  public:
    Bank (int acc) {
      this->acc_no = acc;
      this->balance = 0;
    }

    float deposit (float x) {
      return balance + x;
    }

    float withdraw (float x) {
      return balance - x;
    }

    int get_account_no() {
      return acc_no;
    }

    double getBalance() {
      return this->balance;
    }
}

int main() {
  int acc_index = 0;

  Bank accounts[10];

  int choice;

  do {
    cout << "1. Add an account." << endl;
    cout << "2. Get Total balance in bank." << endl;
    cout << "3. Get account number with max and min balance." << endl;
    cout << "4. Find an account given a bank account no." << endl;
    cout << "5. Count no of accoutns having atleast specific balance." << end;

    cout << "Enter your choice: " << endl;
    cin >> choice;

    switch (choice) {
      case 1: 
        if (acc_index != 10) {
          accounts[acc_index] = Bank(acc_index);
          acc_index++;
        } else {
          cout << "Cannot create an account. Maximum capacity reached..";
        }
        break;
      case 2:
        int total_balance = 0;

        for (int i = 0; i < 10; i++) {
          total_balance += accounts->getBalance();
        }

        cout << "Total balance in bank : " << total_balance;
        break;
      case 3:
        Bank max_acc = accounts[0], min_acc = accounts[0];

        for (int i = 0; i < 10; i++) {
          if (accounts[i].getBalance() > max_acc.getBalance()) max_acc = accounts[i];
          if (accounts[i].getBalance() < max_acc.getBalance()) min_acc = accounts[i];
        }
        break;
    }

  }

}         