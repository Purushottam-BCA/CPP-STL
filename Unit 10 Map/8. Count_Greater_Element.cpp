#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

// Naive Approach - O(n^2)
void Count_Greater(int arr[], int n)
{
  for(int i=0; i<n; i++)
  {
    int cnt = 0;
    for(int j=0;j<n;j++)
      if(arr[j]>arr[i])
        cnt++;

    cout<<cnt<<" ";
  }
}

// Approach-2 - O(nlogn)
void Count_Greater2(int arr[], int n)
{
  map<int,int>m;

  for(int i=0; i<n; i++)
    m[arr[i]]++;

  int cum_freq = 0;

  /* // DEBUGGING
  for(auto it=m.begin(); it!=m.end();it++)
  {
    cout<<it->first<<" - "<<it->second;
    nl;
  }
  */
  for(auto it=m.rbegin(); it!=m.rend();it++)
  {
    int freq = it->second;
    it->second = cum_freq;
    cum_freq += freq;
  }
  nl;
/* // DEBUGGING
  for(auto it=m.begin(); it!=m.end();it++)
  {
    cout<<it->first<<" - "<<it->second;
    nl;
  }
  nl;

  for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    nl;
    */
  for(int i=0; i<n; i++)
    cout<<m[arr[i]]<<" ";

}

int find_index(int temp[], int item, int n)
{
  int low=0, high=n-1,index=-1;
  while(low<=high)
  {
    int mid = low + (high-low)/2;
   // cout<<"LOW = "<<low<< " : "<<temp[low]<<" :: HIGH = "<<high<<" : "<<temp[high]<<" :: MID "<<mid<<" : "<<temp[mid];
   //  nl;
    if(temp[mid]==item)
    {
      index = mid;
      low = mid+1;
    }
    else if(temp[mid]<item)
      low = mid+1;
    else if(temp[mid]>item)
      high = mid-1;
  }
  return index;
}

void Count_Greater3(int arr[], int n)
{
  int temp[n];

  for(int i=0; i<n; i++)
    temp[i] = arr[i];

  sort(temp,temp+n);

  for(int i=0; i<n; i++)
  {
    int index = find_index(temp,arr[i],n);
    cout<<n-(index+1)<<" ";
  }
}

int main()
{
  int arr[] = {10,2,8,5,8};
    Count_Greater(arr,len(arr));
    Count_Greater2(arr,len(arr));
    nl;
    Count_Greater3(arr,len(arr));
  return 0;
}
