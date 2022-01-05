#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
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
 vector<int> a{5,12,20,8};
 print(a);
 nl;
 a.insert(a.begin(),600);

 // Inserting a Value more number of times
 a.insert(a.begin(),a.size(),500);
 print(a);

 // Inserting element into another Vector
 vector<int> V2;
 V2.insert(V2.begin(), a.begin()+2,a.end());
 print(V2);


 // Inserting By RBegin

  vector<int> V2;
 V2.insert(V2.begin(), a.rbegin()+2,a.rend());
 print(V2);

 return 0;
}
