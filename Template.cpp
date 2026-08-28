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

#include<bits/stdc++.h>
using namespace std ;

//function template..... 

template < typename T , typename K> 

T add(T a  , K b)  {
    return a + b  ; 
}

int main()  {
    cout << add(10, 12.0) << endl ; 
    cout << add(10.1  , 1.2) << endl  ; 
    return  0 ; 
}