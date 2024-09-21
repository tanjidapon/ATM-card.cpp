#include <iostream>
using namespace std;

class ATM {
private:
    double balance;

public:
    // Constructor to initialize balance
    ATM(double initialBalance) {
        balance = initialBalance;
    }

    // Function to display the balance
    void checkBalance() {
        cout << "Current Balance: $" << balance << endl;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }
};

int main() {
    ATM myATM(1000);  // Creating an ATM object with an initial balance of $1000

    int choice;
    double amount;

    do {
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                myATM.checkBalance();
                break;
            case 2:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                myATM.deposit(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                myATM.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
