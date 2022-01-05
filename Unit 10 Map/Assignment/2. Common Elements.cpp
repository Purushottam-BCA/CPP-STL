/*
Given two lists V1 and V2 of sizes n and m respectively. Return the list of elements common to both the lists and return the list in sorted order. Duplicates may be there in the output list.

Example:

Input:
5
3 4 2 2 4
4
3 2 2 7

Output:
2 2 3

*/

#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

void CommonElements(int arr1[], int m, int arr2[], int n)
{
  map<int,int>mp;
  for(int i=0;i<m;i++)
    mp[arr1[i]]++;

  for(int j=0;j<n;j++)
    mp[arr2[j]]++;

  for(auto y:mp)
    cout<<y.first<<" "<<y.second<<"\n";
/*
  for(auto x:mp)
    while(x.second>1)
    {
      cout<<x.first<<" ";
      x.second--;
    }
*/
}

int main()
{
  int arr1[]={3,4,2,2,4};
  int arr2[]={3,2,2,7};
  CommonElements(arr1,len(arr1),arr2,len(arr2));
  return 0;
}
