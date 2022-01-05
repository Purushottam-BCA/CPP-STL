/*
 Design a data structure that supports the following operations on a sequence

 1. Insert(x)  :: Insert at last   ;; O(1)
 2. Replace(x, sequence)  :: Replace the element X with given sequence   ;; O(i+len(sequence))
 3. Print()  ;; O(n)
*/

#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

list<int> l;

void insert(int x)   // O(1)
{
   l.push_back(x);
}

void print()  // O(n)
{
   for(int x:l)
      cout<<x<<" ";
   nl;
}

void replace(int x, const vector<int>&seq)
{
   auto it = find(l.begin(),l.end(),x);

   if(it == l.end()) return;

   it = l.erase(it);

   l.insert(it,seq.begin(),seq.end());
}

int main()
{
 insert(3);
 insert(10);
 insert(2);
 insert(10);

 print();

 vector<int> v {99,88,77,66};
 replace(10,v);
 print();
 return 0;
}
