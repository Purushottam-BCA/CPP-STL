#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

// Approach - 1 :: O(n^2)

vector<int> FloorOnLeft(const vector<int> &v)
{
  vector<int>m;
  for(int i=0;i<v.size();i++)
  {
    int diff = INT_MAX;
    for(int j=0; j<i;j++)
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

// Approach - 2 :: O(n log n) :: Not Working

vector<int> FloorOnLeft2(const vector<int> &v)
{
  vector<int> m(v.size());
  set<int>s; // Initially Set is Empty

  for(int i =0; i<v.size(); ++i)
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

// Approach - 3 :: Simple Approach || Only Smaller On Left Not Even Equal

vector<int> FloorOnLeft3(const vector<int> &arr)
{
  vector<int>v;
  if(arr.size()==1) return {-1};

  set<int>s;
  for(int i=0;i<arr.size();i++)
  {
    s.insert(arr[i]);
    auto it = s.lower_bound(arr[i]);

    if(it==s.begin())
        v.push_back(-1);
    else
    {
      it--;
      v.push_back(*it);
    }
  }
  return v;
}

int main()
{
  vector<int>v = {10,150,30,25,30,20,120};
           cout<<"-1 10 10 10 30 10 30";
  vector<int>v1 = FloorOnLeft3(v);

  nl;
  for(int x:v1)
    cout<<x<<" ";

  return 0;
}
