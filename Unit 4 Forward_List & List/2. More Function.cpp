#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

void print(const forward_list<int> &f1)
{
   nl;

   for(auto it=f1.begin();it!=f1.end();it++)
      cout<<(*it)<<" ";
   nl;
}

int main()
{
 forward_list<int> f1 {10,20,30};
 forward_list<int> f2;

 f2.assign(f1.begin(),f1.end());    // Or    f2 = f1
 print(f1);
 print(f2);

 nl;
 cout<<"--------------------INSERT_AFTER( )----------------------";
 nl;

 //TYPE-1 :: insert_after(iterator position, element)

 f1.insert_after(f1.begin(),99);
 auto it = f1.begin();
 it++; it++;

 f1.insert_after(it,99);
 print(f1);

 /*TYPE-2 :: insert_after(position, n, element) :
   The parameter position is of type iterator and it points to the location after which the value of parameter element
   is to be inserted. The parameter n specifies the number of times the value element is to inserted.
 */
 f1.insert_after(f1.begin(),5,111);
 print(f1);

 /*TYPE-3 :: insert_after(iterator position, itr1, itr2)
   The iterators itr1 and itr2 denotes a range [itr1, itr2) and the elements in this range including itr1 and
   excluding itr2 will be inserted to the forward list after the iterator pointing to the given position.
 */

 it = f2.insert_after(f2.begin(),f1.begin(),f1.end());
 print(f2);

/* TYPE-4 :: insert_after(iterator Position, list )
   The second parameter list defines the list of elements to be inserted in the forward_list.
*/

 it = f2.insert_after(it, {5000,6000});

 print(f2);

 /* TYPE-5 :: Copy element from array */

 int arr[] {5555,7777};
 int n = len(arr);

 it = f2.insert_after(it, arr,arr+n);

 print(f2);

 nl;
 cout<<"-------------EMPLACE_FRONT()-----------EMPLACE_AFTER()---------------";
 nl;

 f2.emplace_after(it,8888);
 f2.emplace_front(98);
 f2.emplace_front(98);
 f2.emplace_front(98);
  print(f2);

 nl;
 cout<<"-------ERASE_AFTER(Iterator)----------ERASE_AFTER(Start_iterator, End_Iterator)----------";
 nl;

  f2.erase_after(it);
  f2.erase_after(it);
  print(f2);

  f2.erase_after(it,f2.end());
  print(f2);

  nl;
  cout<<"--------------------CLEAR( )----------------------";
  nl;

  f2.clear();
  print(f2);

 return 0;
}
