#include<iostream>

using namespace std  ;

void swapping ( int &first  , int &second  ){
    int temp  = first ;
    first = second ;
    second = temp ;
}


int main  () {
    // char arr[5] = "1234";
    // char *ptr = arr ;

    // cout << arr << endl; //1234
    // cout<< ptr << endl ;  //1234
    // cout << (void*)arr<<endl; //0x61ff07
    // cout<<(void*) ptr <<endl ;  //0x61ff07 


    int first  = 10  , second  = 20  ;
    swapping (first  , second ) ;
    cout << first  << " " << second ;
}