#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int *age;
    Student(int a) {
        age = new int(a);
    }
};

int main(){

    Student s1(100);
    Student s2 = s1;
    cout << *s1.age << " " << s2.age << endl;
    return 0;
}