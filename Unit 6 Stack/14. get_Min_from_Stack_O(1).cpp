#include<bits/stdc++.h>
using namespace std;

class _stack
{
   stack<int> s;
   int minEle;
   public :
      int getMin();
      int pop();
      void push(int);
};

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int q;
       cin>>q;
        _stack *a = new _stack();
       while(q--)
       {
        int qt;
        cin>>qt;

        if(qt==1)     //push
        {
           int att;
           cin>>att;
           a->push(att);
        }
        else if(qt==2)  //pop
           cout<<a->pop()<<" ";
        else if(qt==3) //getMin
           cout<<a->getMin()<<" ";
       }
      cout<<endl;
   }
}

int minEle = INT_MAX;

int _stack :: getMin()
{
   return (s.empty()?-1:minEle);
}

void _stack::push(int x)
{
    if(s.empty())
    {
        minEle = x ;
        s.push(x);
    }
    else if(x<minEle)  // If Entered Value is less than Min Value So far
    {
     s.push(2*x-minEle);
     minEle = x;
    }
    else s.push(x);  // if Entered Item is greater than or Equal to MinElement
}

int _stack ::pop()
{
    if(s.empty()) return -1;

    int y = s.top();
    s.pop();
    if(y<minEle)  // If Top Element is the Current Minimum Element
    {
        int k = minEle;  // We will return Current Elemnt Here because MinEle was the Actual TOP Now.
        minEle = 2*minEle-y;
        return k;

    }
    else return y;   // If TOP value is greater than or equal to Min Element
}
