#include<bits/stdc++.h>
using namespace std ;

class Student11 {
    public :
      string name ;
      int age;
      //normal construtor....
      Student11(string n, int a) : name(n) , age(a) {} ;
      //copy constructor....
      Student11(const Student11 &other) {
        name = other.name ;
        age  = other.age ;
      }
} ;

int main() {
    Student11 s1("ankush kushwaha" , 67) ;
    //both have their own name and age value ....
    Student11 s2 = s1 ;  //Student s2(s1) ; this is also correct...
    s1.name = "vishal kushwaha" ; //it will change the both the objet name
    cout << s1.name << endl;
    cout << s2.name << endl ;
    return 0 ;
}

