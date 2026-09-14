#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int *age; //it will store the address 
    string *name ; 
    Student(int a , string n) {
        age = new int(a);
        name = new string(n) ; 
    }
};

int main(){
    Student s1(100 , "ankush");
    Student s2 = s1; //copying the object
    cout << s2.age <<  "  " << s2.name << endl ; //return the address of name and age
    *s2.age = 99 ; //return the value of age 
    cout << *s1.age << " " << *s2.age << endl;
    cout << *s1.name << " " << *s2.name<< endl;
    return 0;
}