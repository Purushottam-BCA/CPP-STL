/*
  You are given an array arr of size n. You need to print the distinct elements of array in sorted order(increasing)
  together with their frequency.

  Example:

  Input:
  6
  3 3 2 2 1 4

  Output:
  (1,1) (2,2) (3,2) (4,1)

*/

#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

void sortedFreq(int arr[], int n)
{
  map<int,int>m;
  for(int i=0;i<n;i++)
    m[arr[i]]++;

  for(auto x:m)
    cout<<x.first<<" "<<x.second<<"\n";
}

int main()
{
  int arr[]= {3,1,3,2,4,2};
  sortedFreq(arr,6);
  return 0;
}
