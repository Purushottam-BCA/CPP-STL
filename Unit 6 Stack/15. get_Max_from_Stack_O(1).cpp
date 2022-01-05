#include<bits/stdc++.h>
using namespace std;

class _stack
{
   stack<int> s;
   int maxEle;
   public :
      int getMax();
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
        else if(qt==3) //getMax
           cout<<a->getMax()<<" ";
       }
      cout<<endl;
   }
}

int maxEle = INT_MIN;

int _stack :: getMax()
{
   return (s.empty()?-1:maxEle);
}

void _stack::push(int x)
{
    if(s.empty())
    {
        maxEle = x ;
        s.push(x);
    }
    else if(x>maxEle)  // If Entered Value is Greater than Max Value So far
    {
     s.push(2*x+maxEle);
     maxEle = x;
    }
    else s.push(x);  // if Entered Item is Less than or Equal to MaxElement
}

int _stack ::pop()
{
    if(s.empty()) return -1;

    int y = s.top();
    s.pop();
    if(y>maxEle)  // If Top Element is the Current Minimum Element
    {
        int k = maxEle;  // We will return Current Element Here because MinEle was the Actual TOP Now.
        maxEle = y - 2*maxEle;
        return k;

    }
    else return y;   // If TOP value is smaller than or equal to Max Element
}
