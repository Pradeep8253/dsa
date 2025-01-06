#include<iostream> 

using namespace std ; 

int main () {
//       cout<< " Enter the value " << endl ;
//    int num ; 
//       cin>>num ;

//       if(num % 2 == 0 ){
//         cout<<num << " is the even number" << endl;
//       }
//       else{
//         cout << num << " is the odd number " << endl ;
//       }


int age ; 
cin>>  age ;

   if (age> 18){
    cout<<"adult" <<endl ;
   }

   else if(age >12) {
      cout << "Teenager" <<endl ;
   }
   else {
    cout << "child" << endl ;
   }
}