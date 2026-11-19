
#include<iostream>
using namespace std;

class bank {
private:
    double balance = 1000;

public:
    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "withdraw successful" << endl;
        }
        else {
            cout << "invalid amount" << endl;
        }
    }

    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "deposit successful" << endl;
        }
        else {
            cout << "invalid amount" << endl;
        }
    }

    void showbalance() {
        cout << "Balance = " << balance << endl;
    }
};

int main() {
    bank b;
    b.withdraw(400);
    b.deposit(200);
    b.showbalance();

    return 0;
}
