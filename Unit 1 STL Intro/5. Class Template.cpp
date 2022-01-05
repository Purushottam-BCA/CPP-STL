#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

template <class T>

struct Pair
{
   T x,y;
   Pair(T x, T y)
   {
      this->x = x;
      this->y = y;
   }

   T getX();//{ return x; }
   T getY(){ return y; }
};


template <class T>
T Pair<T>::getX()
{
   return x;
}

int main()
{
 Pair<int>M(10,20);
 cout<<M.getX();
 nl;
 cout<<M.getY();
 nl;
 Pair<string>P ("Hello","World");
 cout<<P.getX();
 nl;
 cout<<P.getY();
 return 0;
}
