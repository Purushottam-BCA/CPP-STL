#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

stack<int> enQue;
stack<int> deQue;

void _push(int x)
{
  enQue.push(x);
}

void _pop()
{
  if(deQue.empty()==false)
  {
    cout<<deQue.top();
    deQue.pop();
  }
  else  // Copy all elements from Enqueue to Dequeue
  {
    while(enQue.empty()==false)
    {
      deQue.push(enQue.top());
      enQue.pop();
    }

    if(deQue.empty()==false)
    {
      cout<<deQue.top();
      deQue.pop();
    }
    else
      cout<<"-1";
  }
}

void _print()
{
  while(deQue.empty()==false)
  {
    cout<<deQue.top()<<" ";
    deQue.pop();
  }

  //  Pushing all elements from enQueue to Deque
  while(enQue.empty()==false)
  {
    deQue.push(enQue.top());
    enQue.pop();
  }

  while(deQue.empty()==false)
  {
    cout<<deQue.top()<<" ";
    deQue.pop();
  }
}

int _top()
{
  if(deQue.empty()==false)
    return deQue.top();
  else
    {
      while(enQue.empty()==false)
      {
        deQue.push(enQue.top());
        enQue.pop();
      }
      if(deQue.empty()==false)
        return deQue.top();
      else
        return -1;
    }
}

int _size()
{
  return (enQue.size()+deQue.size());
}

bool _empty()
{
  // If Both Stack Empty then only it is empty else it is non empty
  return (enQue.empty() && deQue.empty());
}


int main()
{

 return 0;
}
