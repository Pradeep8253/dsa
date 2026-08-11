#include <iostream>

using namespace std;

class Customer
{
    string name;
    int *data;

    public :
    Customer  () {
        name = "pradeep";
        data = new int ;
        *data = 10 ;

        cout  << "Constructor is called" <<endl  ;
    }

    // destructor 

    ~Customer () {
     delete data ;
     cout << "Destructor is called"<<endl;
    }
};

int main()
{
    Customer A1;
}