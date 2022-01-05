#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

int main()
{
 pair<int, int> P1(10,20);
 pair<int, string> P2; // Default value 0 , null
 pair<int, string> P3(30,"Purushottam");

 // There are two more ways to assign values
 // Type 1 :: MOST USE
 int a=10;
 string g="HOW";
 P2 = {a,g};

 // Type 2 :: LESS USE
 P2 = make_pair(99,"KKKKKK");

 cout<<P1.first<<" "<<P1.second;
 nl;
 cout<<P2.first<<" "<<P2.second;
 nl;
 cout<<P3.first<<" "<<P3.second;

 return 0;
}
