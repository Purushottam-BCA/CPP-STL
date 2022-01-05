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

   cout<<"// L.FRONT()-->First Element && L.BACK()--> Last Node   && L.SIZE()--> Size of List";
   nl;

   cout<<"FRONT : "<<l.front()<<" LAST : "<<l.back()<<"  SIZE : "<<l.size();

   nl;

   cout<<"Sort"<<endl;
   l.sort();
   print(l);
   nl;
   cout<<"\n\n REVERSE"<<"\n";
   l.reverse();
   print(l);

   cout<<"\n MERGE \n";
   list<int> b={5,12,210};
   l.merge(b);

   print(l);

   cout<<"\n ERASE \n";
   l.erase(l.begin(),l.end());
   print(l);

   nl;
   l.push_back(20);
      l.push_back(20);
          l.push_back(20);

      print(l);
      nl;
   cout<<"Unique Function \n\n";
   l.unique();

   print(l);
 return 0;
}
