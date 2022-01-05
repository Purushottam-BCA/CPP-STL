#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

// Approach - 1 :: O(n^2)

vector<int> CeilOnLeft(const vector<int> &v)
{
  vector<int>m;
  for(int i=0;i<v.size();i++)
  {
    int diff = INT_MAX;
    for(int j=0; j<i;j++)
    {
      if(v[j]>=v[i])
        diff = min(diff,v[j]-v[i]);
    }
    if(diff == INT_MAX)
      m.push_back(-1);
    else
      m.push_back(v[i]+diff);
  }
  return m;
}

// Approach - 2 :: O(n log n)

vector<int> CeilOnLeft2(const vector<int> &v)
{
  vector<int> m(v.size());
  set<int>s; // Initially Set is Empty

  for(int i =0; i<v.size(); ++i)
  {
    auto it = s.lower_bound(v[i]);
    // If Item is not present add -1
    if(it == s.end())
      m[i] = -1;
    else
      m[i] = *it;
   // At last insert item in Set
    s.insert(v[i]);
  }
  return m;
}

int main()
{
  vector<int>v = {10,150,25,30,20,120};
  vector<int>v1 = CeilOnLeft2(v);

  cout<<"-1 -1 150 150 25 150";
  nl;
  for(int x:v1)
    cout<<x<<" ";

  return 0;
}
