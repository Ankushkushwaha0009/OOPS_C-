// #include <iostream>
// using namespace std;

// namespace Student {
//     void show() {
//         cout << "Student" << endl;
//     }
// }

// namespace Teacher {
//     void show() {
//         cout << "Teacher" << endl;
//     }
// }

// int main() {
//     Student::show();
//     Teacher::show();
//     return 0;
// }


#include <iostream>
using namespace std;

namespace Bank {

    void show() {
        cout << "Bank Account" << endl;
    }
}

namespace Employee {

    void show() {
        cout << "Employee Account" << endl;
    }
}

int main() {

    // TODO

    Bank::show() ; 
    Employee::show() ; 

    // TODO

    return 0;
}