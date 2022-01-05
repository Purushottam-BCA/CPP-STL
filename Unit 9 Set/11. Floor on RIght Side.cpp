#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

// Approach - 1 :: O(n^2)

vector<int> FloorOnRight(const vector<int> &v)
{
  vector<int>m;
  for(int i=0;i<v.size();i++)
  {
    int diff = INT_MAX;
    for(int j=i+1; j<v.size();j++)
    {
      if(v[j]<=v[i])
        diff = min(diff,v[i]-v[j]);
    }
    if(diff == INT_MAX)
      m.push_back(-1);
    else
      m.push_back(v[i]-diff);
  }
  return m;
}
// Approach - 2 :: O(n log n)

vector<int> FloorOnRight2(const vector<int> &v)
{
  vector<int> m(v.size());
  set<int>s;     // Initially Set is Empty

  for(int i=v.size()-1; i>=0; --i)
  {
    auto it = s.lower_bound(v[i]);
    if(it == s.begin()) // If it return Iterator to first element means "Set_Element >= v[i]"
    {
      if(v[i]==*it)
        m[i] = v[i];
      else
        m[i] = -1;
    }
    else
    {   // In case it is the largest in all elements OR if Next Greater Element is present Not the same then
        // We will decrease Iterator by One
      if((it==s.end())||(*it!=v[i]))
        it--;
      m[i] = *it;  // In case Iterator-Element is same as V[i]
    }
   // At last insert item in Set
    s.insert(v[i]);
  }
  return m;
}

int main()
{
  vector<int>v = {10,100,200,30,120,120,26};
  vector<int>v1 = FloorOnRight(v);

  for(int x:v1)
    cout<<x<<" ";

    nl;

  vector<int>v2 = FloorOnRight2(v);
  for(int x:v2)
    cout<<x<<" ";

  return 0;
}
