#include <iostream>
using namespace std;

class Factory;

class Product{
    private:
        int price;
        Product(int p){
            this->price = p;
        }
        friend class Factory;
    public:
        void showPrice() {
            cout << "Price: " << price << endl;
        }
};

class Factory{
    public:
        void createProduct(int price) {
            Product p(price);
            p.showPrice() ; 
        }
};

int main() {
    Factory f;
    f.createProduct(1000);
    return 0;
}