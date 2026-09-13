// #include<bits/stdc++.h>
// using namespace std ; 

// class Payment {
//     //Encapsulation ....
//    private : 
//       double amount ; 
//     public : 
//       Payment(double amount) {
//          this  -> amount = amount ; 
//       }
//       double getAmount() {
//         return amount  ;
//       }
//       //Abstraction ...
//       virtual void pay() = 0 ; 
// } ; 

// class CreditCard : public Payment {
//     public :  
//     CreditCard(double amount) : Payment(amount) {}
//     void pay() override{
//         cout << "Paid : " << getAmount() << " using Credit Card\n";
//     }
// } ; 

// class UPI  : public Payment {
//     public : 
//      UPI(double amount) : Payment(amount) {}   
//       void pay() override {  cout << "Paid :" << getAmount() << " using UPI\n";
//     }
// } ; 

// int main()  {
//     Payment *p; 
    
//     UPI upi(500);
//     CreditCard card(1000);

//     p = &upi ; 
//     p -> pay() ; 

//     p = &card ;
//     p -> pay() ; 

//     return 0 ; 
// }

//Another way to write Main 
//-------------------------------


// #include<bits/stdc++.h>
// using namespace std ; 

// class Payment {
//     //Encapsulation ....
//    private : 
//       double amount ; 
//     public : 
//       Payment(double amount) {
//          this  -> amount = amount ; 
//       }
//       double getAmount() {
//         return amount  ;
//       }
//       //Abstraction ...
//       virtual void pay() = 0 ; 
// } ; 

// class CreditCard : public Payment {
//     public :  
//     CreditCard(double amount) : Payment(amount) {}
//     void pay() override{
//         cout << "Paid : " << getAmount() << " using Credit Card\n";
//     }
// } ; 

// class UPI  : public Payment {
//     public : 
//      UPI(double amount) : Payment(amount) {}   
//       void pay() override {  cout << "Paid :" << getAmount() << " using UPI\n";
//     }
// } ; 

// int main()  {
//     Payment *c  = new CreditCard(100) ; 
//     Payment *u  = new UPI(200) ; 
//     c -> pay() ; 
//     u -> pay() ;
//     return 0 ; 
// }


//Another way to write the main (using array)
//---------------------------------------

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
    Payment *arr[2] ; 
    arr[0] = new CreditCard(200) ; 
    arr[1] = new UPI(100) ; 
    for(int i = 0 ; i < 2 ; i++) {
          arr[i] -> pay() ; 
    }
    return 0 ; 
}