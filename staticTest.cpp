// #include <iostream>
// using namespace std;
// class BankAccount {
// public:
//     int balance;
//     static int totalAccounts;
//     BankAccount(int amount) {
//         this -> balance = amount ; 
//         totalAccounts++ ; 
//     }
//     static void showTotalAccounts() {
//          cout << "Total Accounts is  : " << totalAccounts  << endl ; 
//     }
// };
// int BankAccount::totalAccounts = 0;
// int main() {
//     BankAccount a1(1000);
//     BankAccount a2(2000);
//     BankAccount a3(5000);
//     cout << "Account 1 balance: " << a1.balance << endl;
//     cout << "Account 2 balance: " << a2.balance << endl;
//     cout << "Account 3 balance: " << a3.balance << endl;
//     BankAccount::showTotalAccounts();
//     return 0;
// }

//--------------------------------------------


#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    static int count;
    Employee(string n) {
         this  -> name = n ; 
         count++ ; 
    }
    static void showCount() {
        cout << "Employees : " << count << endl ; 
    }
};

int Employee::count = 0;

int main() {

    Employee e1("Rahul");
    Employee e2("Amit");

    Employee::showCount();

    Employee e3("Ankush");

    Employee::showCount();

    return 0;
}