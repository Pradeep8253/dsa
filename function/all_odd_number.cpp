#include<iostream>

using namespace std ;

bool oddNumber (int x ){
     if(x % 2 ==1){
       return true ;
     }
     else{
        return false ;
     }
}

int main (){
   int n , m ;
   cin>> n ;
   cin>> m ;

   for(int i =n ; i<=m ; i++){
   if(oddNumber(i)){
     cout<< i << " " ;
   }
   }

   return 0 ;
}