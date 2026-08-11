#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // file ko open karna

    ofstream fout;
    fout.open("zoom.txt"); // create kar dega fir open kar dega 


    // write kar skta hu 

    fout << "Hello India";
    fout.close() ; 
}