#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

vector<int> KLargest(const vector<int> &v, int k)
{
  priority_queue<int,vector<int>,greater<int>> p;
  vector<int>v1;

  for(int i=0;i<v.size();i++)
  {
    p.push(v[i]);

    if(p.size()>k)
      p.pop();
  }

  while(p.empty()==false)
  {
    v1.push_back(p.top());
    p.pop();
  }

  return v1;
}

int main()
{
  vector<int> v {7,10,4,3,20,5,9,16};
  int k=2;

  vector<int> v1 = KLargest(v,k);

  for(int i=v1.size()-1;i>=0;i--)
    cout<<v1[i]<<" ";
  nl;
  return 0;
}
