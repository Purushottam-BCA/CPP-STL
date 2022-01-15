/*
Find the Union of two unsorted arrays. Assume that the arrays are unique
   and any single array does not contain repeated items.

Example:
Input: arr1[] = {2, 7, 13, 10}
       arr2[] = {10, 9, 4, 5, 7, 20}
Output: {2, 7, 13, 10, 9, 4, 5, 20}

Input: arr1[] = {7, 1, 5, 2, 3, 6}
       arr2[] = {3, 8, 6, 20, 7}
Output: {1, 2, 3, 5, 6, 7, 8, 20}
*/

#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

// Approach-1
/*
   Printing all the elements of the first array(arr1[m])
   and then print all those elements of the second array(arr2[n])
   that is not present in the first array.
*/
bool Search(int a, int b[], int n)
{
   for(int i=0; i<n; i++)
      if(b[i]==a)
         return true;
   return false;
}

void findUnion(int a[], int b[], int m, int n)
{
   for(int i=0; i<m ; i++)
      cout<<a[i]<<" ";

   for(int j=0; j<n; j++)
   {
      if(!Search(b[j], a,m))
         cout<<b[j]<<" ";
   }
}

// Approach-2
void findUnion2(int a[], int b[], int m, int n)
{
   unordered_set<int> s;

   for(int i=0; i<m ; i++)
   {
      s.insert(a[i]);
      cout<<a[i]<<" ";
   }

   for(int j=0; j<n; j++)
   {
      if(s.find(b[j])==s.end())
         cout<<b[j]<<" ";
   }
}

int main()
{
   int arr1[] = {2, 7, 13, 10};
   int arr2[] = {10, 9, 4, 5, 7, 20};
   findUnion(arr1,arr2,len(arr1),len(arr2));
   nl;
   findUnion2(arr1,arr2,len(arr1),len(arr2));
   return 0;
}
