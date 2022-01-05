#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
#define ppi pair<int,int>

struct mycomp
{
  // Descending Order
  bool operator()(pair<int, int> const& a,  pair<int, int> const& b)
  {
    return a.second<b.second;
  }
};

struct mycomp2
{
  // Ascending Order
  bool operator()(pair<int, int> const& a,  pair<int, int> const& b)
  {
    return a.second>b.second;
  }
};

int main()
{
  // Max-Heap
  priority_queue<ppi>p;
  p.push(make_pair(5,4));
  p.push(make_pair(8,2));
  p.push(make_pair(6,3));
  p.push(make_pair(15,6));
  // Min-Heap
  priority_queue<ppi, vector<ppi>,mycomp2> p2;
  p2.push(make_pair(5,4));
  p2.push(make_pair(8,2));
  p2.push(make_pair(6,3));
  p2.push(make_pair(15,6));

  while(p.empty()==false)
  {
    cout<<p.top().first<<" "<<p.top().second;
    nl;
    p.pop();
  }

  nl;

  while(p2.empty()==false)
  {
    cout<<p2.top().first<<" "<<p2.top().second;
    nl;
    p2.pop();
  }

  return 0;
}
