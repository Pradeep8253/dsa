#include<iostream>

using namespace std  ;
// void fun0(int n ){
//     cout <<  "Happy Birthday " << endl  ;
// }

// void fun1(int n ){
//     cout <<  n  << " days left for birthday" << endl  ;
//         fun0(0);

// }

// void fun2(int n ){
//     cout <<  n  << " days left for birthday" << endl  ;
//         fun1(n-1);

// }

void fun3(int n ){

    //base case 

    if (n==0)
    {
       cout <<  "Happy Birthday " << endl  ; 

       return ;
    }
    
    cout <<  n  << " days left for birthday" << endl  ;
    fun3(n-1);
}





int main(){

    int n=3 ;

    // iterate approach  

    // for(int  i=n ;  i>0;  i--){
    //     cout  <<  i  << " days  left for  birthday  " <<endl ;

    // }

    // cout<< "Happy Birthday " <<endl ;

    fun3(3) ;
    // fun2(2) ;
    // fun1(1) ;
    // fun0(0) ;
}