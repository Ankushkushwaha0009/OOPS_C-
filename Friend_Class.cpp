//Example 1
// #include <bits/stdc++.h>
// using namespace std;

// class Teacher;

// class Student {
//     private:
//         int marks;

//     public:
//         Student(int m)  {
//             this->marks = m;
//         }
//         friend Teacher;
// };

// class Teacher {
//     public : 
//     void PrintMarks(Student s)  {
//         cout << s.marks << endl;
//     }
// };

// int main() {
//     Student s(100);
//     Teacher t;
//     t.PrintMarks(s);
//     return 0;
// }

//Example 2

#include <iostream>
using namespace std;

class DatabaseManager;

class Database {

private:

    Database() {
        cout << "Database created" << endl;
    }

    friend class DatabaseManager;
};

class DatabaseManager {

public:

    void createDatabase() {
        Database db;
    }
};

int main() {

    DatabaseManager manager;

    manager.createDatabase();

    return 0;
}


