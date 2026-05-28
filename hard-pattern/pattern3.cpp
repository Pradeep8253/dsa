#include<iostream>

using namespace std  ;

int main () {

    int n , row , col  ;  
    cout  <<"Enter the number  of n " << endl ;
  
    cin >> n  ;


    for( row =1  ; row<=n ;  row = row+1 ) {
        for ( col =1 ;  col <=n-row ; col = col+1 ){
            cout <<  "  " ;
        }
        for(col=1 ;  col<=row; col = col+1){
            cout  << col << " " ;
        }

        cout << endl ;
    }
}


// Output 



// Enter the number  of n 
// 5
//         1 
//       1 2 
//     1 2 3 
//   1 2 3 4 
// 1 2 3 4 5 