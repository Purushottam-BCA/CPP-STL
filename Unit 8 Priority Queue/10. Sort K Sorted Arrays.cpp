#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

void sortKsorted(int *arr, int n, int k)
{
  priority_queue<int,vector<int>,greater<int>> p;
  int index = 0;
  for(int i=0; i<n; i++)
  {
    p.push(arr[i]);
    if(p.size()>k)
    {
     arr[index] = p.top();
     p.pop();
     index++;
    }
  }

  while(p.empty()==false)
  {
    arr[index] = p.top();
    p.pop();
    index++;
  }

  for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}

int main()
{
  int arr[] {6,5,3,2,8,10,9};
  sortKsorted(arr,len(arr),3);
  return 0;
}
