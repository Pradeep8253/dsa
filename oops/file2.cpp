#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;

    // file ko open krna
    fin.open("zoom.txt");

    // file ko read karo ..

    char c;
    c = fin.get();

    while (!fin.eof())
    {
        cout << c;
        c = fin.get();
    }
    fin.close();
}