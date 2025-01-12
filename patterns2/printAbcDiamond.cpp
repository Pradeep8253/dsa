#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the value of n " << endl;
    int n;
    cin >> n;

    for (int line = 1; line <= n; line++)
    {

        int no_of_space = (n - line);

        for (int k = 0; k < no_of_space; k++)
        {
            cout << " ";
        }

        int no_of_chars = 2 * line - 1;

        for (int j = 0; j < no_of_chars; j++)
        {
            char ch = (char)('A' + j);

            cout << ch;
        }

        cout << "\n";
    }

    for (int line = n + 1; line <= 2 * n - 1; line++)
    {
        int no_of_spaces = (line - n);
        for (int k = 0; k < no_of_spaces; k++)
        {
            cout << " ";
        }

        int no_of_chars = 2 * (2 * n - line) - 1;
        for (int j = 0; j < no_of_chars; j++)
        {
            cout << (char)('A' + j);
        }

        cout << "\n";
    }

    return 0;
}