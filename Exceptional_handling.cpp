#include <bits/stdc++.h>
using namespace std;
int main() {
    try{
        int a = 10;
        int b = 0;
        if (b == 0)
            throw 1.0;
        cout << a / b;
    }
    catch (double e){
        cout << "Cannot divide ny zero" << endl;
    }
    return 0;
}