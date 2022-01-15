#include<bits/stdc++.h>
using namespace std;
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

// Approach-1 : Sorting
int MaxConsecutive(int arr[], int n)
{
   sort(arr, arr+n);
   int prev=1, curr=1;
   for(int i=1; i<n; i++)
   {
      if(arr[i]-arr[i-1]==1)
         curr++;
      else
      {
         prev=max(prev,curr);
         curr=1;
      }
   }
   prev = max(prev,curr);
   return prev;
}

// Approach-2 : Left and Right Both Side
int MaxConsecutive2(int arr[], int n)
{
   unordered_set<int> s(arr,arr+n);
   int maxm = 0;
   for(int i=0; i<n; i++)
   {
      int x = arr[i];
      int left = 1;
      while(s.count(x-left)==1)
         left++;

      int right = 1;
      while(s.count(x+right)==1)
         right++;

      maxm = max(maxm,right+left-1);
   }
   return maxm;
}


// Approach-3 : Optimized : We just want to find the starting point From where we will start
int MaxConsecutive3(int arr[], int n)
{
   unordered_set<int> s(arr,arr+n);
   int maxm = 0;
   for(int i=0; i<n; i++)
   {
      int x = arr[i];
      if(s.count(x-1)==1) continue;
      int curr = 1;
      while(s.count(x+curr)==1)
         curr++;
      maxm = max(maxm,curr);
   }
   return maxm;
}

int main()
{
   int arr[] ={8,20,7,30,9,16,5,6};
   cout<<MaxConsecutive(arr,len(arr));
   nl;
   cout<<MaxConsecutive2(arr,len(arr));
   nl;
   cout<<MaxConsecutive3(arr,len(arr));
   return 0;
}
