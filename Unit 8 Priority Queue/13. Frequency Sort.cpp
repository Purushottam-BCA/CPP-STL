#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

void Freq_Sort(int *arr, int n)
{
  unordered_map<int,int>mp;
  for(int i=0; i<n; i++)
    mp[arr[i]]++;

  priority_queue<pair<int,int>>p;

  for(auto i=mp.begin();i!=mp.end();i++)
    p.push({i->second, i->first});

  while(p.empty()==false)
  {
    int cnt = p.top().first;
    for(int i=1;i<=cnt;i++)
      cout<<p.top().second<<" ";
    p.pop();
  }
}

int main()
{
  int arr[] = {1,1,3,2,1,2,4};
  Freq_Sort(arr,7);
  return 0;
}
