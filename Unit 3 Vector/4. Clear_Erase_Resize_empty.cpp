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
 vector<int> V {10,15,6,21,9};
 print(V);

 // ---------- Erase() Function --------------

 // V.erase(V.begin()+2);

 // V.erase(V.begin(), V.begin()+2);

 // ---------- Clear Function ----------------

 // V.clear();

 //------------ Empty() FUnction -------------

 cout<<std::boolalpha<<V.empty();

 // ------------Re Size() Function -----------

 V.resize(2);
 print(V);
 nl;

 // Resize with Default Value

 V.resize(10,99999);
 print(V);
 nl;
 return 0;
}
