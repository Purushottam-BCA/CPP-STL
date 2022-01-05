#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

void TrackIndexes(const int arr[], int n)
{
   vector<pair<int,int>> v;

   for(int i=0;i<n;i++)
      v.push_back({arr[i],i});

      /*
      ----------------2nd Approach------------------

      vector<pair<int,int>> v(n);

      for(int i=0;i<n;i++)
         v[i] = {arr[i],i};

      ---------------3rd Approach-------------------
      vector<pair<int,int>> v;
      for(int i=0;i<n;i++)
         v.push_back(make_pair(arr[i],i));

      */
   sort(v.begin(),v.end());

   for(int i=0;i<n;i++)
      cout<<v[i].first<<" "<<v[i].second<<endl;
}

int main()
{
 int arr[]={20,40,30,10};
 int n = len(arr);
 TrackIndexes(arr,n);
 return 0;
}
