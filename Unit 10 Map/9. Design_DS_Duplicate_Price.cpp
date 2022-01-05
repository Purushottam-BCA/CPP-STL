#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

multimap<int,string>mp;

void add(int price, string name){
  mp.insert({price,name});
}

void _find(int price)
{
  auto it = mp.lower_bound(price);
  if(it->first==0 || it->first!=price)
  {
   cout<<"No items with price = "<<price;
   return;
  }
  nl;
  while(it!=mp.end() && it->first==price)
  {
    cout<<it->second<<" "<<it->first<<"\n";
    it++;
  }
}

void printSorted()
{
  for(auto it=mp.begin();it!=mp.end();it++)
    cout<<it->second<<" "<<it->first<<endl;
}

void printSmallerSorted(int price)
{
  auto iter = mp.lower_bound(price);
  for(auto it=mp.begin(); it!=iter; it++)
    cout<<it->second<< " "<<it->first<<endl;
}

void printGreaterSorted(int price)
{
  auto iter = mp.upper_bound(price);
  for(auto it=iter; it!=mp.end(); it++)
    cout<<it->second<< " "<<it->first<<endl;

}

int main()
{
  add(10,"abc");
  add(20,"bcd");
  add(5,"cde");
  add(10,"efg");
  add(20,"ghi");

  _find(20);
/*
  printSorted();
  nl;
  printSmallerSorted(20);
  nl;
  printGreaterSorted(10);
*/
  return 0;
}
