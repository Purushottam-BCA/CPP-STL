#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

// Function to print array elements
void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}


int main()
{

    int arr[] = { 60, 10, 80, 40, 30, 20, 50, 90, 70 };
    int n = sizeof(arr) / sizeof(arr[0]);
   cout<<" NORMAL ORDER : ";
    printArray(arr, n);
    nl;
    nl;
    sort(arr,arr+n);
      cout<<" ASSENDING ORDER : ";
      printArray(arr, n);
    nl;
    nl;
    // To sort the array in decreasing order
    // use greater <int>() as an third arguments
    sort(arr, arr + n, greater<int>());

    // Print array elements
    cout<<" DESCENDING ORDER : ";
    printArray(arr, n);

   nl;
   nl;
    return 0;
}
