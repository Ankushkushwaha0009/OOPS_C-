#include<bits/stdc++.h>
using namespace std ; 

class Payment {
    //Encapsulation ....
   private : 
      double amount ; 
    public : 
      Payment(double amount) {
         this  -> amount = amount ; 
      }
      double getAmount() {
        return amount  ;
      }
      //Abstraction ...
      virtual void pay() = 0 ; 
} ; 

class CreditCard : public Payment {
    public :  
    CreditCard(double amount) : Payment(amount) {}
    void pay() override{
        cout << "Paid : " << getAmount() << " using Credit Card\n";
    }
} ; 

class UPI  : public Payment {
    public : 
     UPI(double amount) : Payment(amount) {}   
      void pay() override {  cout << "Paid :" << getAmount() << " using UPI\n";
    }
} ; 

int main()  {
    Payment *p; 
    
    UPI upi(500);
    CreditCard card(1000);

    p = &upi ; 
    p -> pay() ; 

    p = &card ;
    p -> pay() ; 

    return 0 ; 
}