#include<bits/stdc++.h>
using namespace std;
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

void interSection(int a[], int b[], int m, int n)
{
   unordered_set<int>s;
   for(int i=0; i<n;i++)
      s.insert(b[i]);

   for(int i=0 ;i<m ; i++)
   {
      auto it = s.find(a[i]);
      if(it!=s.end())
      {
         cout<<a[i]<<" ";
         s.erase(it);
      }
   }
}

int main()
{
   int a[] = {10,20,30};
   int b[] = {30,20,10,20};
   interSection(a,b,len(a),len(b));
   return 0;
}
