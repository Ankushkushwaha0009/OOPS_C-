// #include <iostream>
// using namespace std;

// class Complex {
//     public:

//         int real;
//         int imaginary;

//         Complex(int r, int i) {
//             real = r;
//             imaginary = i;
//         }

//         Complex operator+(const Complex& other) {
//             Complex result(
//                 real + other.real,
//                 imaginary + other.imaginary
//             );
//             return result;
//         }
// };

// int main() {

//     Complex c1(3, 4);
//     Complex c2(5, 6);

//     // c1.operator+(c2)
//     // this -> c1
//     // other -> c2

//     Complex c3 = c1 + c2;
//     cout << c3.real << " + "
//          << c3.imaginary << "i" << endl;

//     return 0;
// }

// -------- using (=) Operator --------------

// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     int marks;
//     Student(int marks)
//     {
//         this->marks = marks;
//     }

//     bool operator==(const Student &other)
//     {
//         return other.marks == marks;
//     }
// };

// int main()
// {
//     Student s1(1000);
//     Student s2(1000);
//     if(s1 == s2) {
//         cout << "Both are same ..." << endl ; 
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std  ; 
class Number  {
    public : 
       int value ; 
       Number(int value) {
        this -> value =  value ; 
       }
       Number operator+(const Number &other) {
           Number result(other.value + value) ; 
           return result ; 
       }
} ; 
int main()  {
    Number n1(10) ; 
    Number n2(20) ; 
    Number n3 = n1 + n2 ; 
    cout << n3.value << endl ; 
    return  0 ;  
}