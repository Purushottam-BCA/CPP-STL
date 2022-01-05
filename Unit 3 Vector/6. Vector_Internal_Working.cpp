#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

int main()
{
 vector<int> v;
 for(int i=0;i<10;i++)
{
   v.push_back(i+1);
   cout<<"SIZE : "<<v.size()<<"  <---->  Capacity : "<<v.capacity();
   nl;
}
 return 0;
}
