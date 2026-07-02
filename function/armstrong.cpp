#include <iostream>
using namespace std;

// Count digits in a number
int countDigit(int n)
{
    if (n == 0)
        return 1;

    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}

// Calculate base^exp
int power(int base, int exp)
{
    int result = 1;

    while (exp)
    {
        result *= base;
        exp--;
    }

    return result;
}

// Check Armstrong number
bool isArmstrong(int num)
{
    int digit = countDigit(num);
    int n = num;
    int sum = 0;

    while (n)
    {
        int rem = n % 10;
        sum += power(rem, digit);
        n /= 10;
    }

    return sum == num;
}

int main()
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong Number";
    else
        cout << num << " is not an Armstrong Number";

    return 0;
}