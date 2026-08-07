#include<iostream>

using namespace std  ;

void print (int num , int N ){

    // base case 

    if(num==N){
        cout<< num << endl ;
        return ;
    }

    cout << num << endl ;

    print(num+1 , N) ;
}

void printWithSingleArgument (int N){
   
    if(N==1){
        cout << 1 << endl;
        return ;
    }

    printWithSingleArgument(N-1) ;

    cout <<N <<endl;
}

int main  () {
    //  Print  number from  1 to n  
    int N ;

    cin>> N;

    //  print(1 ,  N);


     printWithSingleArgument(N);

}