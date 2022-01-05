#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

// Approach-1 :: Sort Then Traverse
int max_Item(int *arr, int n, int sum)
{
  sort(arr, arr+n);
  int counter=0;
  for(int i=0; i<n; i++)
  {
    sum -= arr[i];
    if(sum>=0)
      counter++;
    else
      break;
  }
  return counter;
}

// Approach-2 :: Heap
int max_Item2(int *arr, int n, int sum)
{
  priority_queue<int,vector<int>,greater<int>>p;
  for(int i=0;i<n;i++)
    p.push(arr[i]);

  int counter=0;
  while(p.empty()==false)
  {
    sum -= p.top();
    p.pop();
    if(sum>0)
      counter++;
    else
      break;
  }
  return counter;
}

int main()
{
  int ar[] = {1,12,5,30,111,200};
  int sum = 60;
  cout<<max_Item2(ar,6,sum);
  return 0;
}
