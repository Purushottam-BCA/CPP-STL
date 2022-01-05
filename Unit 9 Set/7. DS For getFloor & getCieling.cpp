/*

Problem: Design a Data Structure that supports insert, delete, search, getFloor and getCieling operations

Approach - 1 :: Using Vector          :: Except Insert() Other Operation require O(n)
Approach - 2 :: Using Unordered Set   :: Here GetCeiling & GetFloor Require O(n)
Approach - 3 :: Using Set  (Best)     :: ALl Operations requires O(log n)

*/

#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

set<int>s;

void Insert(int x)
{
  s.insert(x);
}

bool Search(int x)
{
  return (s.find(x) != s.end());
}

void Delete(int x)
{
  s.erase(x);
}

int getCeiling(int x)
{
  auto it = s.lower_bound(x);
  if(it==s.end())
    return INT_MAX;
  else
    return *it;
}

// 2 5 9 16
int getFloor(int x)
{
  auto it = s.lower_bound(x);
  // Check if it is first element or not
  if(it == s.begin())
  {
    if(*it==x)
      return x;
    else // In case it is smaller than smallest number
      return INT_MIN;
  }
  else
  {
    it--;
    return *it;
  }
}

int main()
{
  Insert(10);
  Insert(20);
  Insert(15);
  Insert(5);
  Insert(25);

  cout<<boolalpha<<Search(15);
  nl;
  Delete(15);
  cout<<boolalpha<<Search(15);
  nl;
  cout<<getFloor(6);
  nl;
  cout<<getFloor(5);  nl;
  cout<<getCeiling(6);  nl;
  cout<<getCeiling(25); nl;
  cout<<getCeiling(100); nl;
  cout<<getFloor(1); nl;
  return 0;
}
