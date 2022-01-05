#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

void print(const list<int> &l)
{
   nl;
   for(auto x:l)
      cout<<x<<" ";
   nl;
}

// forward_list is implemented as Singly-linked lists whereas, a List in C++ is implemented using doubly linked lists.

int main()
{
 list<int> l;

 l.push_back(11);
 l.push_back(22);
 l.push_front(33);
 l.push_front(99);
 l.push_back(55);
 l.push_back(44);
 l.push_front(66);
 l.push_front(98);

 print(l);
 nl;
 cout<<"// ---- POP_FRONT()-------POP_BACK()----------"<<endl;

 l.pop_front();
 l.pop_back();

 print(l);

 /*
  insert() function is used to insert the elements at any position of list.
           This function takes 3 elements, position, number of elements to insert and value to insert.
           If not mentioned, number of elements is default set to 1.

  Syntax:  insert(pos_iter, no_of_times, value)
 */

 auto it = l.begin();
 it++;
 it++;

 it = l.insert(it,3,15);
 print(l);

 it = l.insert(it,9009);
 print(l);

 return 0;
}
