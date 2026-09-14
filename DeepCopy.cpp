// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     int *age;
//     Student(int a) {
//         age = new int(a); // storing the address
//     }
//     // copy construtor -> deep copy
//     Student(const Student &obj){
//         age = new int(*obj.age); // storing the address
//     }
//     ~Student(){
//         delete age;
//     }
// };

// int main(){
//     Student s1(1000);
//     Student s2 = s1;
//     *s2.age = 999;
//     cout << *s1.age << " " << *s2.age << endl;
//     return 0;
// }

//------------------------- One more Example.. -------------------

#include <iostream>
using namespace std;

class Student {
public:
    int* marks;

    // Constructor
    Student(int m) {
        marks = new int(m);
    }

    // Deep Copy Constructor
    Student(const Student& other) {
        //it will copy the value and crete one new memory in heap
        marks = new int(*other.marks); 
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