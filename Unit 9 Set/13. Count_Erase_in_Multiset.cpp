#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

int main()
{
  int arr[] = {2,5,9,1,2,6,2};
  int n = len(arr);

  multiset<int> m (arr,arr+n);

  for(int x:m)
    cout<<x<<" ";

    nl;

  cout<<"Count of 2 : "<<m.count(2);
  m.erase(2);

  nl;

  for(int x:m)
    cout<<x<<" ";

  return 0;
}
