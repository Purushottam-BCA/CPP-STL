#include<bits/stdc++.h>

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
#define pb push_back
#define ppb pop_back

using namespace std;

void print(vector<int> &v)
{
   nl;
   for(auto i=v.begin();i!=v.end();i++)
      cout<<(*i)<<" ";
   nl;
}
int main()
{
   vector<int> v(5,0);
   print(v);

   v.ppb();
   v.ppb();
   v.ppb();
   print(v);

   v.pb(40);
   v.pb(50);
   print(v);

   cout<<"------------------------------------------";
   nl;
   cout<<"FRONT = "<<v.front();
   nl;
   cout<<"BACK = "<<v.back();

   // We can set Values also using front and back

   v.front() = 100;
   v.back() = 25;
   nl;
   print(v);
   nl;

   cout<<"------------------------------------------";
   nl;

   // FOR Printing in Reverse Order

   for(auto i=v.rbegin();i!=v.rend();i++)
      cout<<(*i)<<" ";
   nl;

   // FOR Constant CBegin() , cEnd(), crBegin(), crEnd()

    for(auto i=v.crbegin();i!=v.crend();i++)
      cout<<(*i)<<" ";
   nl;

   cout<<"------------------------------------------";
   nl;



 return 0;
}
