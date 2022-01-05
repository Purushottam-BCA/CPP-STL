#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

int K_Smallest(int arr[], int k, int n)
{
  priority_queue<int>p;
  for(int i=0; i<n;i++)
  {
    p.push(arr[i]);
    if(p.size()>k)
      p.pop();
  }
  return p.top();
}

int sum_K1_K2(int *arr, int n,int a,int b)
{
  int a1 = K_Smallest(arr,a,n);
  int b1 = K_Smallest(arr,b,n);

  int sum = 0;

  for(int i=0; i<n;i++)
    if(arr[i]>a1 && arr[i]<b1)
      sum += arr[i];

  return sum;
}

int main()
{
  int a[] = {1,3,12,5,15,11};
  cout<<sum_K1_K2(a,6,3,6);
  return 0;
}
