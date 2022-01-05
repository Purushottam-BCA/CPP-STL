#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

/*
  Approach - We will use Deque here.
   1. When queue will be empty then first item will be maximum.
*/

queue<int>q;
deque<int>d;

void _push(int x)
{
  q.push(x);
  // Keep deleting Smallest Element from Last
    while(d.empty()==false && d.back()<x)
      d.pop_back();
    d.push_back(x);
}

void _pop()
{
  int y=q.front();
  if(y==d.front())
    d.pop_front();
  q.pop();
}

int _max()
{
  return (d.empty()?-1:d.front());
}

int main()
{
  _push(30);
  _push(15);
  cout<<_max();
  nl;
  _push(40);
  _push(12);
  _push(6);
  cout<<_max();
  _pop();
  _pop();
  _pop();
  nl;
  cout<<_max();
  return 0;
}
