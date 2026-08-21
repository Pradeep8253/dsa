#include<iostream>
#include<queue>
using namespace std ;

int main (){

 queue<int> q ;
 q.push(5) ;
 q.push(15);
 q.push(21);
 q.push(51);

 //  value print karo 

 int n = q.size() ;

 while(n--){
    cout<<q.front() << " " ;
    q.push(q.front());
    q.pop() ;
 }
}