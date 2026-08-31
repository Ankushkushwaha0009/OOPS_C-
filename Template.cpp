// #include<bits/stdc++.h>
// using namespace std ; 
// template < typename T > 
// T add(T a  , T b)  {
//     return a + b  ; 
// }
// int main()  {
//     cout << add(10 , 12) << endl ; 
//     cout << add(10.1  , 1.2) << endl  ; 
//     return  0 ; 
// }

// #include<bits/stdc++.h>
// using namespace std ;

// //function template..... 

// template < typename T , typename K> 

// T add(T a  , K b)  {
//     return a + b  ; 
// }

// int main()  {
//     cout << add(10, 12.0) << endl ; 
//     cout << add(10.1  , 1.2) << endl  ; 
//     return  0 ; 
// }

//--------------------------Exercise ------------------------------


// #include <iostream>
// using namespace std;

// template <typename T>

// T maximum(T a, T b) {
//     if(a > b) return a ; 
//     return b  ;     
// }

// int main() {
//     cout << maximum(10, 20) << endl;
//     cout << maximum(5.5, 2.2) << endl;
//     return 0;
// }

// class template .....

// #include<bits/stdc++.h>
// using namespace std ; 
// template < typename T > 
// class Box  {
//     public :  
//        T value ;
//        Box(T value)  {
//          this -> value = value ; 
//        }
//        void show() {
//         cout << value << endl;
//     }
// } ; 
// int main() {
//     Box < int > b1(100) ; 
//     Box < float > b2(100.111) ; 
//     Box <string> b3("ankush kushwaha") ; 
//     b1.show() ; 
//     b2.show() ; 
//     b3.show() ; 
//     return 0  ; 
// }

//ractice --------------------------------

#include<bits/stdc++.h>
using namespace std; 
template < typename T > 
class Calculator { 
    public : 
      T a  ; 
      T b  ;
    Calculator(T a , T b) {
        this -> a = a ; 
        this -> b = b  ; 
    } 
    T add() {
        return a + b;
    }
}  ; 
int main() {
    Calculator<int> c1(10, 20);
    Calculator<double> c2(2.5, 3.5);
    cout << c1.add() << endl;
    cout << c2.add() << endl;
    return 0;
}