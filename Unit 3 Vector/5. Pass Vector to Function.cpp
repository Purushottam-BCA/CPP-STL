#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

void fun( vector<int> &v)
{
   v.push_back(40);
   v.push_back(999);
}

int main()
{
 vector<int> v{5,12,26,9,51};
  for(const int &x:v)
   cout<<x<<" ";
   nl;
 fun(v);
 nl;
 nl;
 for(const int &x:v)
   cout<<x<<" ";
 return 0;
}
