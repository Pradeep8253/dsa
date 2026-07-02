#include<iostream>
using namespace std ;


int main  () {
    int n , row  , col  ;

    cout<<"Enter the value of the n " <<endl  ;
    cin>>  n ;

    for(row=1; row<n; row=row+1){
        for(col=1 ; col<=n-row;  col=col+1){
            cout<<"  " ;
        }
        for(col=1; col<row ; col=col+1){
            cout<< col<< " " ;
        }
        for(col<row-1; col>=1; col=col-1){
            cout<<col  << " ";
        }
        cout<< endl ;
    }
}



// OUPUT 


// Enter the value of the n 
// 5
//         1 
//       1 2 1 
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 