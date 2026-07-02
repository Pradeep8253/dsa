#include<iostream>
using namespace std  ;


int main () {
       int n , row , col  ; 

       cout <<  "Enter  the value of the n " << endl  ; 
        cin >>  n ; 

        for(row=1; row<=n ;  row++){
            for(col=1;  col<=(n-row) ; col=col+1){
                cout << "  ";
            }
            for(col=1;  col<=(2*row-1); col = col+1){
                cout << "*" << " " ;
            }

            cout <<endl;
        }
}


// OUTPUT

// Enter  the value of the n 
// 5
//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 