#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

void printSort(int arr[], int n)
{
  priority_queue<int>p(arr,arr+n);

  // Store from Arr[n-1] because P_Queue,top will give the max element each time.
  for(int i=n-1;i>=0;i--) // O(nlogn)
  {
    arr[i]= p.top();
    p.pop();
  }

  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main()
{
  int arr[] = {1,9,21,6,3,5,0};
  printSort(arr,7);
  return 0;
}
