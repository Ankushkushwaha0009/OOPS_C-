// //Copy the values of the members directly, including pointer values.
// #include <bits/stdc++.h>
// using namespace std;

// class Student{
// public:
//     int *age; //it will store the address 
//     string *name ; 
//     Student(int a , string n) {
//         age = new int(a);
//         name = new string(n) ; 
//     }
// };

// int main(){
//     Student s1(100 , "ankush");
//     Student s2 = s1; //copying the object
//     cout << s2.age <<  "  " << s2.name << endl ; // return the address of name and age
//     *s2.age = 99 ; //return the value of age 
//     cout << *s1.age << " " << *s2.age << endl;  // both are pointing to same location 
//     cout << *s1.name << " " << *s2.name<< endl; // both are pointing to same location ....
//     return 0;
// }

//----------------------Proper Eg

#include <iostream>
using namespace std;

class Student {
public:
    int* marks;

    // Constructor
    Student(int m) {
        marks = new int(m);
    }

    // Shallow Copy Constructor
    Student(const Student& other) {
        marks = other.marks; // here we are storing the address so now both arr pointing to same memory location
    }

    // Destructor
    ~Student() {
        delete marks;
    }
};

int main() {

    Student s1(90);

    Student s2 = s1;

    // Change s2
    *s2.marks = 50;

    cout << "s1 marks: " << *s1.marks << endl;
    cout << "s2 marks: " << *s2.marks << endl;

    return 0;
}