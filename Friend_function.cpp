#include <bits/stdc++.h>
using namespace std;

class Student{
private:
    int mark;
public:
    Student(int m){
        this->mark = m;
    }
    friend void funct(Student s);
};

//now we can be able to access the private value outside to Student class...

void funct(Student s){
    cout << s.mark << endl;
}

int main() {
    Student s1(99);
    funct(s1) ; 
    return 0;
}