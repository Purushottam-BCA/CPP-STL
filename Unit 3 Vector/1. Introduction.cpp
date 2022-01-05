#include<bits/stdc++.h>

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
#define pb push_back

using namespace std;

int main()
{/*
 // Style 1 :: To Create a vector
 vector<int> v;
 v.pb(10);
 v.pb(15);
 v.pb(30);

 for(int i=0;i<v.size();i++)
   cout<<v[i]<<" ";  // Or cout<<v.at(i)<<" ";

 // Style 2 :: To Create a vector
 vector<char> Arr{'A','D','A','N','I'};
 for(char ch:Arr)
 {
 // ch='M'; // We can change only if & (reference ) is passed with for each loop.
    cout<<ch<<" ";
 }

 // Style : 3 - Create vector with default value;
 int n=5, item=2;
 vector<int> v(n,item);

// for(vector<int>::iterator i=v.begin(); i!=v.end();i++)
//                      OR
 for(auto i=v.begin(); i!=v.end();i++)
   cout<<(*i)<<" ";
 */
 // Style : 4 - Create & initialize vector
 int arr[] = {10,5,20};
 int n = len(arr);
 vector<int> v(arr, arr+n);

 cout<<v.capacity()<<"\n";
 cout<<v.size();
 nl;
 for(auto i=v.begin(); i!=v.end();i++)
   cout<<(*i)<<" ";
 nl;

 // Two ways to print using Index
 for(int i=0; i<v.size();i++)
   cout<<v[i]<<" ";
 nl;

 for(int i=0; i<v.size();i++)
   cout<<v.at(i)<<" ";
 nl;

 return 0;
}
