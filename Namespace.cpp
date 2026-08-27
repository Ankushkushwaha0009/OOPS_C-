#include <iostream>
using namespace std;

namespace Student {
    void show() {
        cout << "Student" << endl;
    }
}

namespace Teacher {
    void show() {
        cout << "Teacher" << endl;
    }
}

int main() {
    Student::show();
    Teacher::show();
    return 0;
}