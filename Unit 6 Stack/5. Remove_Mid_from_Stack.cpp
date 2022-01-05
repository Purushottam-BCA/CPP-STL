#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

// Use Only PUSH(), POP(), EMPTY()
// Without Using Additional data Structure USING RECURSION

// in case of Odd/Even  :- Mid = ceil(Size/2)+1
// ODD  : [10,15,20,25,30]     ==> 3rd Element  ==>   [10,15,25,30]
// EVEN : [10,20,30,40,50,60]  ==> 4th Element  ==>   [10,20,30,50,60]
void TypeOne(stack<int> &v, int n, int term)
{
   if(v.empty()==true) return;

   int x = v.top();
   v.pop();

   TypeOne(v,n,term+1);//5-1,4-2,3-3,2-4,1-5
//   cout<<"TERM = "<<term<<" X : "<<x<<" MIDDLE : "<<ceil(n/2.0);
   nl;
   if(term!=(ceil(n/2.0)))
      v.push(x);
}

// in case of Odd/Even  :- Mid = Floor((Size+1)/2)
// ODD  : [10,15,20,25,30]    ==> 3rd Element ==>  [10,15,25,30]
// EVEN : [10,20,30,40,50,60] ==> 3nd Element ==>  [10,20,40,50,60]
void TypeTwo(stack<int> &v, int n, int term)
{
   if(v.empty()) return;

   int x = v.top();
   v.pop();

   TypeTwo(v,n,term+1);
   cout<<"TERM = "<<term<<" X : "<<x<<" MIDDLE : "<<(n/2)+1;
   nl;
   if(term!= (n/2)+1)
      v.push(x);
}


// Main Function
void RemoveMidElement(stack<int> &v)
{
 //  TypeOne(v,v.size(),1);
     TypeTwo(v,v.size(),1);
}

int main()
{
 int T,x,N;
 cin>>T;
 while(T--)
 {
    cin>>N;
    stack<int> v;
    for(int i=1; i<=N; i++)
    {
       cin>>x;
       v.push(x);
    }
    RemoveMidElement(v);
    while(v.empty()==false)
    {
       cout<<v.top()<<" ";
       v.pop();
    }
    nl;
 }
 return 0;
}
