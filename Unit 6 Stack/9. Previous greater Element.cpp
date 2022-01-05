#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

// O(n^2) Approach :: Search Nearest Greater Element in Left Of Current Element
vector<int> previousGreaterElement(int *arr, int n)
{
   vector<int> v;
   int j;

   for(int i=0;i<n;i++)
   {
      for(j=i-1;j>=0;j--)
         if(arr[j]>arr[i])
         {
            v.push_back(arr[j]);
            break;
         }
      if(j==-1) // In case No greater element exist
         v.push_back(-1);
   }
   return v;
}

// Approach 2 : Using Stack :: O(n) Time & Space
vector<int> previousGreaterElement2(int *arr, int n)
{
   vector<int>v;
   stack<int>s;

//          0   1  2  3 4  5  6  7
//   cout<<"15 10 18 12 4  6  2  8"<<endl;
//   cout<<"-1 15 -1 18 12 12 6 12"<<endl;

   s.push(0); // index of 1st Element
   v.push_back(-1);

   for(int i=1;i<n;i++)
   {
      // if Current element is bigger than Stack Top(i.e. Biggest) Element we don't need it.
      // pop them because Current is the greatest element now.

      while(s.empty()==false && arr[i]>arr[s.top()])
         s.pop();

      // if stack is empty menas All elements were smaller than current so Current is the biggest element , So Insert -1
      // Else insert Arr[Stack_top] Element Which is The Current Maximum

      int span =(s.empty()==true?-1:arr[s.top()]);

      v.push_back(span);
      s.push(i);
   }
   return v;
}

// Approach 3 : Similar to Approach 2 : Instead of index direct store element in Stack
vector<int> previousGreaterElement3(int *arr, int n)
{
   vector<int>v;
   stack<int>s;

   s.push(arr[0]); // 1st Element
   v.push_back(-1); // Becuase There is No Left element before 1st element so It is greater, So isnert -1

   for(int i=1;i<n;i++)
   {
      // if Current element is bigger than Stack Top(i.e. Biggest) Element we don't need it.
      // pop them because Current is the greatest element now.

      while(s.empty()==false && arr[i]>s.top())
         s.pop();

      // if stack is empty menas All elements were smaller than current so Current is the biggest element , So Insert -1
      // Else insert Stack_top Element Which is The Current Maximum

      int span =(s.empty()==true?-1:s.top());

      v.push_back(span);
      s.push(arr[i]);
   }
   return v;
}

int main()
{
 int arr[]={15,10,18,12,4,6,2,8};
 int n = len(arr);
 cout<<"15 10 18 12 4  6  2  8"<<endl;
 cout<<"-1 15 -1 18 12 12 6 12"<<endl;
 vector<int> v = previousGreaterElement3(arr,n);
 for(int x:v)
   cout<<x<<" ";
 return 0;
}
