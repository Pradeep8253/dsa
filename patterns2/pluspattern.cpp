#include<iostream>

using namespace std ;

int main() {
    cout<<"Enter the odd value of the n which is greater than 2 "<<endl;
    int n ; 
    cin>>n ;

    for(int i = 0 ;  i<n ; i++){
      for(int j = 0 ; j<=n; j++){
       if( j == n/2) cout<<"*";
       else if( i == n/2) cout<<"*";
       else cout << " " ;
      }
      cout<<"\n";
    }

    return 0 ;
}


// OutPut : -

// Enter the odd value of the n which is greater than 2 
// 5
//   *   
//   *
// ******
//   *
//   *