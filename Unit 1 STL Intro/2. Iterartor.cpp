#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

int main()
{

 vector<int> v = {15,20,3,7,21};

 vector<int>:: iterator i = v.begin();

 cout<<(*i);
  i = next(i);
 nl;
 cout<<(*i);

 i = prev(i);
 nl;
 cout<<(*i);

 next(i,2);
 advance(i,2);
 nl;
 cout<<(*i);

 return 0;
}
