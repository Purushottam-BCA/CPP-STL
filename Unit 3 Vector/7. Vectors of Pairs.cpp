#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

bool sortRev(pair<int,int> A, pair<int,int>B)
{
      return A.second>B.second;
}

void SortedMarks(const int roll[],const int mark[],int n)
{
   vector<pair<int,int>>v(n);
   // Type-1 :: Sort default and print in Reverse Order
 /*
   for(int i=0;i<n;i++)
      v[i] = {mark[i],roll[i]};

   sort(v.begin(),v.end());

   for(auto it = v.rbegin();it!=v.rend();it++)
      cout<<(*it).second<<" "<<(*it).first<<endl;
 */

   // Type-2 :: By Normal Flow & By Specifying a Functional Argument

   for(int i=0;i<n;i++)
      v[i] = {roll[i],mark[i]};

   sort(v.begin(),v.end(),sortRev);

   for(int i=0;i<n;i++)
   {
      cout<<v[i].first<<" "<<v[i].second<<endl;
   }
 /*
   // Type-3 :: Using Greater<int,int>() Function

   for(int i=0;i<n;i++)
      v[i] = {mark[i],roll[i]};

   sort(v.begin(),v.end(),greater<pair<int,int>>());

     for(int i=0;i<n;i++)
   {
      cout<<v[i].second<<" "<<v[i].first<<endl;
   }
*/
}
int main()
{
 int roll[]={105,101,133,150,161};
 int mark[]={75,99,61,25,86};
 SortedMarks(roll,mark,len(roll));
 return 0;
}
