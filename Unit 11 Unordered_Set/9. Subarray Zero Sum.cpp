#include<bits/stdc++.h>
using namespace std;
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

// Approach-1 : O(n^2)
bool isSubArray(int arr[], int n)
{
   for(int i=0;i<n; i++)
   {
      int sum = 0;
      for(int j=i;j<n;j++)
      {
         sum += arr[j];
         if(sum==0) return true;
      }
   }
   return false;
}

//Approach-2 : O(n)
bool isSubArray2(int arr[], int n)
{
   unordered_set<int>s;
   int prefix_sum=0;
   for(int i=0; i<n; i++)
   {
      prefix_sum += arr[i];
      // Checking Duplicasy
      if(s.count(prefix_sum)==1)
         return true;
      if(prefix_sum==0)
         return true;
      s.insert(prefix_sum);
   }
   return false;
}

int main()
{
   int arr[] = {1,4,13,-3,-10,5};
   cout<<boolalpha<<isSubArray2(arr,len(arr));
   nl;
   int arr2[] = {16,9,5};
   cout<<boolalpha<<isSubArray2(arr2,len(arr2));
   nl;
   int arr3[] = {8,0,5};
   cout<<boolalpha<<isSubArray2(arr3,len(arr3));
   return 0;
}
