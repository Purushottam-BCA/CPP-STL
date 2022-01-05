#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

int KthSmallest(const vector<int> &v, int k)
{
  priority_queue<int> p;

  for(int i=0;i<v.size();i++)
  {
    p.push(v[i]);

    if(p.size()>k)
      p.pop();
  }
  return p.top();
}

int main()
{
  vector<int> v {7,10,4,3,20,5,9,16};
  int k=4;
  cout<<KthSmallest(v,k);
  nl;
  return 0;
}
