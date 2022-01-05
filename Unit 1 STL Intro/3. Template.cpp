#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

template<typename T>

T findMax(T a, T b)
{
   return (a>b)?a:b;
}
int main()
{
 cout<<findMax<int>(5,12);
 nl;
 cout<<findMax<float>(2.5f,1.6f);
 nl;
 cout<<findMax<char>('C','9');
 return 0;
}

// Template is always better than Macro
// Because Macro is peroformed at Preprocessing so it blindly copy & replace code without type checking.
