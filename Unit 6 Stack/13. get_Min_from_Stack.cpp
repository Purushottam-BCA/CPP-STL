#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

// TIME - O(1)   Space : O(n)

stack<int>MS; // Main Stack
stack<int>AS; // Auxiliary Stack to hold Minimum Element

void _push(int x)
{
   if(MS.empty())
   {
      MS.push(x);
      AS.push(x);
   }
   else
   {
      MS.push(x);
      // In case Newly Inserted item is smaller or equal to current minimum Element
      if(MS.top()<=AS.top())
         AS.push(x);
   }
}

int _pop()
{
   if(MS.empty()) return -1;
   // If deleted item was the lowest till now then we also have to remove that.
   if(AS.top()==MS.top())
      AS.pop();

   MS.pop();
}

int getMin()
{
   return (AS.empty()?-1:AS.top());
}

int main()
{
 _push(5);
 _push(2);
 _push(7);
 cout<<getMin()<<endl;
 _push(8);
 _push(1);
 cout<<getMin()<<endl;
 _pop();
 cout<<getMin()<<endl;
 _pop();
 cout<<getMin()<<endl;
 _push(10);
 _pop();
 _pop();
 cout<<getMin()<<endl;
 _pop();
 _pop();
 _push(0);
 cout<<getMin()<<endl;
 return 0;
}
