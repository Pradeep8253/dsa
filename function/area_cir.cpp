#include<iostream>

using namespace std ; 

float area (int radius){
        float result = 3.14 * radius*radius ;
        cout<< result<<endl ;
} 

float circumfrence  (int radius) {
    float result  =  2 * 3.14*radius ;
    cout<< result<<endl ;
}


int main(){
      cout << "Enter the value of n " <<endl ;
      int n ;
      cin>>n ; 

      area(n) ;
      circumfrence(n) ;

      return 0 ;
}