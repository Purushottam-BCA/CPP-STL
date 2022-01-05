#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

vector<int> K_Closest(int *arr, int n,int k, int x)
{
  priority_queue<pair<int,int>>p;
  vector<int>v;

  for(int i=0; i<n; i++)
  {
    p.push({abs(arr[i]-x),arr[i]});
    if(p.size()>k)
      p.pop();
  }

  while(p.empty()==false)
  {
    v.push_back(p.top().second);
    p.pop();
  }

  return v;
}

int main()
{
  int arr[] = {5,6,2,8,9};
  vector<int> m = K_Closest(arr,5,3,7);
  for(int i=0; i<m.size(); i++)
    cout<<m[i]<<" ";
  return 0;
}
