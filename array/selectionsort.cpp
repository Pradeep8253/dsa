#include <iostream>

using namespace std;

int main()
{

    int arr[1000] ;
    int n  ;
    cout <<"Enter the size of array  : " << endl  ;
    cin>>n ;
    cout <<"Enter the element  of  the  array : " << endl ;
    for(int i=0; i<n; i++)
    cin>>arr[i] ;

    for (int i = 0; i < n-1; i++)
    {
        int index = i;

        for(int j = i+1 ;  j<n;  j++){
            if(arr[j] <arr[index])
            index = j ;
        }

        swap(arr[i]  , arr[index]);
    }

    for( int i=0;  i<n ;  i++){
        cout <<  arr[i] << " ";
    }
}


// OUTPUT 

// Enter the size of array  : 
// 8
// Enter the element  of  the  array: 
// 5 8 6 7 11 1 63 50 
// 1 5 6 7 8 11 50 63 