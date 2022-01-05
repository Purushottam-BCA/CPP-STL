#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

/*
The stock span problem is a financial problem where we have a series of n daily price for a stock
and we need to calculate span of stock’s price for all n days.

The span Si of the stock’s price on a given day i is defined as the count of consecutive days just before the given day,
for which the price of the stock on the current day is less than or equal to its price on the given day.

Ex :- if an array of 7 days prices is given as   {100, 80, 60, 70, 60, 75, 85},
then the span values for corresponding 7 days are {1,   1,  1,  2,  1,  4, 6}

*/

// Approach - 1 :: O(n^2)

void stockSpan2(int arr[], int n)
{
   for(int i=0; i<n; i++)
   {
      int count=1;

      for(int j=i-1; j>=0; j--)
         if(arr[j]>arr[i])
            break;
         else
            count++;
      /*Simple Alternative
        for (int j = i - 1; (j >= 0)&&(arr[i] >= arr[j]); j--)
            S[i]++;
      */
      cout<<count<<"   ";
   }
   cout<<"\n";
}

// Approach -2 :: Using Stack

void stockSpan(int arr[], int n)
{
   vector<int> v;
   stack<int>s;
   s.push(0); // index of first Element
   v.push_back(1); // First Element has always a span of 1

   for(int i=1;i<n;i++)
   {
      while(s.empty()==false && arr[i]>=arr[s.top()])// keep Removing all the smaller Elements
         s.pop();

      int span = (s.empty()?(i+1):(i-s.top()));
      v.push_back(span);
      s.push(i);// if element is smaller we simply push it .
   }
   for(int x:v)
      cout<<x<<" ";
}

int main()
{
 int arr[]{15,13,12,14,16,8,6,4,10,30};
 for(int x : arr)
   cout<<x<<"  ";
 nl;
 int n= len(arr);
 stockSpan(arr,n);
 return 0;
}
