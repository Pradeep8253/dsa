#include<iostream>
using  namespace std ;

class  Node {
    public: 
    int data ;
    Node *next ;

    Node(int value){
        data = value  ;
        next = NULL ;
    }
};

class Queue {
    Node * front ;
    Node *rear ;

    public :

    Queue (){
         front = rear = NULL ;
    }

    bool IsEmpty(){
        return front == NULL ;
    }

    void push(int x){
        if(IsEmpty()){
            front= new Node(x);
            rear = front ;
            cout << "Pushed the element " << x << endl ;
            return ;
        }
        else {
            rear->next  = new Node(x) ;
            rear = rear->next ;
            cout << "Pushed Elemnt " << x <<endl ;
        }
    }

    void pop(){
        if(IsEmpty()){
            cout<< "Queue is underflow";
            return ;
        }
        else {
             Node *temp = front ;
            front = front->next ;
  cout << "popped " <<  temp->data << " From the queue" <<endl ;
            delete temp ;
        }
    }

    int start (){
        if(IsEmpty()){
              cout <<"Queue is empty ";
        }
        else {
            return front ->data ;
        }
    }

};
int main () {
   Queue  q ;
   q.push(5) ;
   q.push(21);
   q.pop();
}