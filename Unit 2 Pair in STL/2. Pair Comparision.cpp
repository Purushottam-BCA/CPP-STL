#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

int main()
{
 pair<int, int>P1(40,10), P2(40,15), P3(15,6),P4(10,14);
 cout<<std::boolalpha;
 cout<<"Equal : "<<(P1==P2);
 nl;
 cout<<"Not Equal : "<<(P1!=P2);
 nl;
 cout<<"Greater Than : "<<(P1>P2);
 nl;
 cout<<"Less Than : "<<(P1<P2);
 return 0;
}
