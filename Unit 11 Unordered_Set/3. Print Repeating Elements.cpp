#include<bits/stdc++.h>
using namespace std;
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

void printDuplicate(int *arr, int n)
{
   unordered_set<int>s;
   for(int i=0; i<n; i++)
   {
      if(s.find(arr[i])!=s.end())
         cout<<arr[i]<<" ";
      else
         s.insert(arr[i]);
   }
}

int main()
{
   int arr[] = {2,2,2,2};
   printDuplicate(arr,len(arr));
   return 0;
}
