#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

int main()
{
  // Min Heap  :: Type 1
  priority_queue<int,vector<int>,greater<int>> p;

  p.push(20);
  p.push(2);
  p.push(7);
  p.push(6);

  cout<<p.size();
  nl;
  cout<<p.top();
  nl;
  p.pop();
  cout<<p.top();
  nl;
  cout<<boolalpha<<p.empty();
  nl;

  while(p.empty()==false)
  {
    cout<<p.top()<<" ";
    p.pop();
  }
  return 0;
}
