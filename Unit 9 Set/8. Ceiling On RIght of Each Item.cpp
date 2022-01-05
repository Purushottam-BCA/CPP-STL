#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

// Approach - 1 :: O(n^2)

vector<int> CeilOnRight(const vector<int> &v)
{
  vector<int>m;
  for(int i=0;i<v.size();i++)
  {
    int diff = INT_MAX;
    for(int j=i+1; j<v.size();j++)
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

vector<int> CeilOnRight2(const vector<int> &v)
{
  vector<int> m(v.size());
  set<int>s;

  for(int i = v.size()-1;i>=0; --i)
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
  vector<int>v = {10,100,200,30,120,120};
  vector<int>v1 = CeilOnRight2(v);

  for(int x:v1)
    cout<<x<<" ";

  return 0;
}
