#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

// O(n^2) Approach :: Search Nearest Greater Element in Right Of Current Element
vector<int> NextSmallerElement(int *arr, int n)
{
   vector<int> v;
   int j;

   for(int i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++)
         if(arr[j]<arr[i])
         {
            v.push_back(arr[j]);
            break;
         }
      if(j==n) // In case No greater element exist
         v.push_back(-1);
   }
   return v;
}

// Approach 2 : Using Stack to store Values
vector<int> NextGreaterElement2(int *arr, int n)
{
   vector<int>v;
   stack<int>s;

   s.push(arr[n-1]); // last Element
   v.push_back(-1); // Becuase There is No Right element After last element so It is greater, So isnert -1

   for(int i=n-2;i>=0;i--)
   {
      // if Current element is bigger than Stack Top(i.e. Biggest) Element we don't need it.
      // pop them because Current is the greatest element now.

      while(s.empty()==false && arr[i]>s.top())
         s.pop();

      // if stack is empty menas All elements were smaller than current so Current is the biggest element , So Insert -1
      // Else insert Stack_top Element Which is The Current Maximum

      int next_max =(s.empty()==true?-1:s.top());

      v.push_back(next_max);
      s.push(arr[i]);
   }
   reverse(v.begin(),v.end());
   return v;
}

int main()
{
 int arr[]={15,10,18,12,4,6,2,8};
 int n = len(arr);
 cout<<"15 10 18 12 4 6  2  8"<<endl;
 cout<<"10 4 12 4 2 2 -1 -1"<<endl;
 vector<int> v = NextSmallerElement(arr,n);
 for(int x:v)
   cout<<x<<" ";
 return 0;
}
