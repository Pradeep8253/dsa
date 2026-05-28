#include<iostream>
using namespace std  ;


int main(){
    int n , row , col  ;

    cout << "Enter the value of n  "  << endl ;
    cin>> n ; 

    for(row  = 1 ; row<=n ; row = row + 1){
         for(col =1 ; col <=n-row;  col = col + 1){
            cout << "  " ;
         }
         for(col =1 ;  col <=row; col = col+1) {
            cout << row << " ";
         }

         cout << endl ;
    }


}



// Output 


// Enter the value of n  
// 5
//     1
//    22
//   333
//  4444
// 55555


