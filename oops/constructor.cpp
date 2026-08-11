#include<iostream>

using namespace std  ;

class Customer {
    string name  ;
    int account_number ;
    int balance ;

    public : 
    // default constructor  
    Customer () {
        name = "Pradeep" ;
        account_number=500;
        balance=100; 
    }

    Customer (string name ,  int account_number , int balance){
       this-> name = name ;
       this-> account_number= account_number ;
       this-> balance = balance ; 
    }

    void display () {
        cout<<name << " " <<  account_number << " " <<balance <<endl ;
    }
};

int main  () {
     Customer A1 ;
    Customer A2("shivam" , 200 , 2000 ) ;
     A1.display();
     A2.display() ;
}