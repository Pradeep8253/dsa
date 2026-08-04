#include<iostream>

using namespace std  ;


int main () {
    int arr[5] =  {1 , 2 , 3 , 4 ,5 } ;

    int *ptr = arr ; 

    //  Print the address of first  element  or 0 index 

    cout  << arr<< endl  ;
    cout  << arr+0 << endl ;
    cout  << &arr[0] << endl ;
    cout << ptr << endl ;

    //  Print  the address of  second element or 1 index 

    cout  << arr+1 << endl  ;
    cout << &arr[1] << endl ;

    //  Print the value of the  0 index 
 
    cout  << arr[0] << endl ;
    cout << *arr<< endl ;
        cout  << *(arr+0) << endl ;




}