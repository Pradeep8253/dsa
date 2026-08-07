#include<iostream>


using namespace std ;

int power (int pow , int n ){
    //base case 

    if(n==0){
        return  1  ;
    }

    return pow * power(pow , n-1) ;
}

int main  (){

    int n , pow ;
    cout << "Enter the pow"<<endl ;
    cin>>pow ;
    cout<<"Enter the value of n "<< endl ; 
    cin>>n ;

    cout <<  power(pow , n)<<endl ;
}