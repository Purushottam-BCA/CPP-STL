#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

// Forward list in C++ STL implements a singly linked list.

void print(const forward_list<int> &f1)
{
   nl;

   for(auto it=f1.begin();it!=f1.end();it++)
      cout<<(*it)<<" ";

   /*
   for(int x:f1)
      cout<<x<<" ";
   */
   nl;
}

int main()
{
 forward_list<int> f1 {10,20,30};

 f1.push_front(99);
 f1.push_front(120);
 f1.push_front(-5);

   print(f1);

 f1.pop_front();
 f1.pop_front();

   print(f1);

// TYPE-1 :: assign() : This function is used to assign values to forward list.
//                      its another variant is used to assign repeated elements.

 f1.assign({11,22,33,11,55,66,11});

   print(f1);

// TYPE-2 :: We can also use to assign to another list.

 forward_list<int> f2;

 f2.assign(f1.begin(),f1.end());

   print(f2);

// TYPE-3 :: We can also assign same value multiple times

 forward_list<int> f3;

 f3.assign(5,99);

   print(f3);

// remove(): This function removes all the matched elements from the forward list that is mentioned in its argument (if 10 then all 10)

 f1.remove(11);

   print(f1);

 return 0;
}
