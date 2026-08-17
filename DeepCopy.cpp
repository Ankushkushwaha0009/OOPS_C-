#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int *age;
    Student(int a)
    {
        age = new int(a); // storing the address
    }
    // copy construtor -> deep copy
    Student(const Student &obj)
    {
        age = new int(*obj.age); // storing the address
    }
    ~Student()
    {
        delete age;
    }
};

int main()
{
    Student s1(1000);
    Student s2 = s1;
    *s2.age = 999;
    cout << *s1.age << " " << *s2.age << endl;
    return 0;
}
