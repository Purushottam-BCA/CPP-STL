#include<bits/stdc++.h>
using namespace std;
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

// Approach-1
int MaximizeDistinct(int arr[], int n, int k)
{
   unordered_set<int>s;
   for(int i=0;i<n;i++)
      if(s.size()<(n/k))
         s.insert(arr[i]);
      else
         return s.size();
   return s.size();
}

// Approach-2
int MaximizeDistinct2(int arr[], int n, int k)
{
   unordered_set<int>s;
   for(int i=0;i<n;i++)
      s.insert(arr[i]);

      if(s.size()>=(n/k))
         return n/k;
      else
         return s.size();
}

int main()
{
   int arr[] = {1,1,2,1,3,1};
   int arr2[] = {1,1,2,1,3,1};
   int arr3[] = {1,1,1,1,1,1,1,1};
   cout<<MaximizeDistinct2(arr,len(arr),2);
   nl;
   cout<<MaximizeDistinct2(arr2,len(arr2),3);
   nl;
   cout<<MaximizeDistinct2(arr3,len(arr3),4);
   return 0;
}
