#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

struct Test
{
  int x;

  bool operator < (const Test &t) const
  {
    return (this->x > t.x);  // Descending
  }
};

int main()
{
  set<Test>s;

  s.insert({5});
  s.insert({12});
  s.insert({7});
  s.insert({6});

  for(Test m:s)
    cout<<m.x<<" ";

  return 0;
}
