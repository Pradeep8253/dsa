#include <iostream>
#include <vector>

using namespace std;

void subsequencesum(int arr[], int index, int n, int sum )
{
    if (index == n)
    {
cout<<sum<<endl;
        return;
    }

    // not include
    subsequencesum(arr, index + 1, n, sum);
    // include
    subsequencesum(arr, index + 1, n, sum+arr[index]);
}

int main()
{

    int arr[] = {1, 2, 3 ,4};

    subsequencesum(arr, 0, 4, 0);

}