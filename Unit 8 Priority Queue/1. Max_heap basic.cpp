#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

int main()
{
  // Max Heap
  priority_queue<int> p;
  p.push(20);
  p.push(12);
  p.push(27);

  cout<<p.size();
  nl;
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
