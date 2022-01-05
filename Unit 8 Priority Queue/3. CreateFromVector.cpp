#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

int main()
{
  int arr[] = {20,9,31,61,5};
  vector<int> v{15,6,2,9,21};
  priority_queue<int,vector<int>,greater<int>> m1(arr,arr+5);
  priority_queue<int> m2(v.begin(),v.end());

  while(m1.empty()==false)
  {
    cout<<m1.top()<<" ";
    m1.pop();
  }
  nl;
  while(m2.empty()==false)
  {
    cout<<m2.top()<<" ";
    m2.pop();
  }
  return 0;
}
