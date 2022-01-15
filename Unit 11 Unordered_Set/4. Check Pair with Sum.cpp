#include<bits/stdc++.h>
using namespace std;
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

bool isPairSum(int *arr, int n, int sum)
{
   unordered_set<int>s;
   for(int i=0; i<n; i++)
   {
      int target = sum - arr[i];
      if(s.find(target)!=s.end())
         return true;
      s.insert(arr[i]);
   }
   return false;
}

int main()
{
   int arr[] = {5,6};
   int sum = 10;
   cout<<boolalpha<<isPairSum(arr,len(arr),sum);
   return 0;
}
