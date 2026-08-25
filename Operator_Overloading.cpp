#include <iostream>
using namespace std;

class Complex {
    public:

        int real;
        int imaginary;
        
        Complex(int r, int i) {
            real = r;
            imaginary = i;
        }

        Complex operator+(const Complex& other) {
            Complex result(
                real + other.real,
                imaginary + other.imaginary
            );
            return result;
        }
};

int main() {

    Complex c1(3, 4);
    Complex c2(5, 6);
    
    // c1.operator+(c2) 
    // this -> c1 
    // other -> c2 

    Complex c3 = c1 + c2; 
    cout << c3.real << " + "
         << c3.imaginary << "i" << endl;

    return 0;
}