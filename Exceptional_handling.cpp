// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     try{
//         int a = 10;
//         int b = 0;
//         if (b == 0)
//             throw 1.0;
//         cout << a / b;
//     }
//     catch (double e){
//         cout << "Cannot divide ny zero" << endl;
//     }
//     return 0;
// }

//Example 2 ...............

// #include <bits/stdc++.h>
// using namespace std ; 
// int divide( int a , int b) {
//     if(b == 0)  throw "Division by zero" ; 
//     return a / b ; 
// }
// int main() {
//     try {
//        cout << divide(10 , 0) ;  
//     }catch(const char* message) {
//        cout << message << endl ; 
//     }
//     return 0 ;
// }

//Example 3 (Practice)
#include <iostream>
using namespace std;
int main() {
    int age;
    cin >> age;
    try {
        if (age < 0) {
           throw 1 ; 
        }
        cout << "Valid age" << endl;
    }
    catch(int e) {
        cout << "Invalid age" << endl;
    }
    return 0;
}