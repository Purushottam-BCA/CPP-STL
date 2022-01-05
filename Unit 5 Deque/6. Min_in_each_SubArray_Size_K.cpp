#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

void Min_subArray(int arr[], int n, int k)
{
   deque<int>dq;

   // Part 1 : First Window, Push Minm at front and Max at back
   for(int i=0;i<k; i++)
   {
      while(dq.empty()==false && arr[i]<=arr[dq.back()])
         dq.pop_back();

      dq.push_back(i);
   }

   // Part 2 : 2nd Window to Last Window
   for(int i=k;i<n; i++)
   {
      cout<<arr[dq.front()]<<" ";

      while(dq.empty()==false && dq.front()<=i-k)  // if deque contains previous window element then Delete from Front
         dq.pop_front();

      // Setting min element at front & max element at the End
      while(dq.empty()==false && arr[i]<=arr[dq.back()])
         dq.pop_back();

      dq.push_back(i);
   }
   // Part 3: printing (front)/min element of Last Window
   cout<<arr[dq.front()]<<endl;
}

int main()
{
   int arr[] = {10,8,5,12,15,7,6};
   Min_subArray(arr,7,3);
   nl;
   int arr2[] = {20,5,3,8,6,15};
   Min_subArray(arr2,6,2);
   nl;
   int arr3[] = {1,2,3,1,4,5,2,3,6};
   Min_subArray(arr3,9,3);
   return 0;
}
