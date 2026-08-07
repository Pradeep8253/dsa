#include<iostream>

using namespace std  ;

// FIRST  METHOD 

// void print (int arr[] ,  int index , int n ){

//     if(index==n)
//     return ;
      
//     cout << arr[index] <<" " ;

//     print(arr , index+1 ,  n);
// } 


// SECOND METHOD ;

void print1(int arr[] , int index){

    if(index == -1 )
    return ;

    print1(arr , index-1);
    cout<<arr[index]<< " ";
}


int main () {
    int arr [] =  {3 , 4, 1 , 2,8} ;

    // print(arr , 0 , 5 ) ;
    print1(arr ,  4 );
}