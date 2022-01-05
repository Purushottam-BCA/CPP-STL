#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

// Approach-1 :: Sort and Add 1st & 2nd items (N-1) Times , 3rd items (N-2) time, 4th item (N-3) times and so on

int Connect_Ropes(int arr[], int n)
{
  sort(arr,arr+n);

  for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

  nl;
  int sum = arr[0] * (n-1);

  for(int i=1;i<n;i++)
    sum +=arr[i] * (n-i);

  return sum;
}

// Approach-2 : Using Heap (Optimized)
int Connect_Ropes2(int *arr, int n)
{
  priority_queue<int, vector<int>, greater<int>>p;
  for(int i=0; i<n; i++)
      p.push(arr[i]);

  int sum=0;
  while(p.size()>1)
  {
    int a= p.top();
    p.pop();

    int b = p.top();
    p.pop();

    sum += a+b;
    p.push(a+b);
  }

  return sum;
}

int main()
{
  int arr[] = {4,3,2,5,1};
  cout<<Connect_Ropes(arr,5);
  return 0;
}
