#include<iostream> 

using  namespace  std  ;


int main () {

    cout  << "Enter  the value  of the  n " << endl ;

    int  n  ;

    cin >> n  ;

    int  row  = 1  ;  

    while (row  <=n) {

        int col  = 1  ;
         
        char  ch  =  'A' + row  - 1  ;
        while  (col <=n ) {
           

            cout  << ch  ;

            ch  = ch  + 1  ;

            col = col  + 1  ;

        }

        cout  << endl ;

        row = row  + 1 ;
    }
}


// Enter  the value  of the  n 
// 5
// ABCDE
// BCDEF
// CDEFG
// DEFGH
// EFGHI