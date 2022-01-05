#include<algorithm>
#include<iostream>

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

int main()
{
 int arr[] = {5,18,6,8,2};

 // Calling Sort Function

 sort(arr+0,arr+5);

 for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";

// Binary Search
if(binary_search(arr,arr+5,8)==true)
   cout<<"Found";
else
   cout<<"Not FOund";
 return 0;
}
