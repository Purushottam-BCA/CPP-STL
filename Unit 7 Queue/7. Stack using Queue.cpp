#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

// There is a similar approach also available where Push - O(n) but Pop()-O(1)

 queue<int> q;

 void _push(int x)
 {
   q.push(x);
 }

 int _pop()
 {
    if(q.empty()) return -1;
    else
    {
      for(int i=1;i<q.size();i++)
      {
        q.push(q.front());
        q.pop();
      }
      int ans = q.front();
      q.pop();
      return ans;
    }
 }

 int main()
 {

  _push(2);
  _push(4);
  _push(1);
  _push(6);
  cout<<_pop();
  nl;
  _push(7);
  _push(8);
  cout<<_pop();

  return 0;
 }
