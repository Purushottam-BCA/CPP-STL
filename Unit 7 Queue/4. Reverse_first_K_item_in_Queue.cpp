#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

queue<int> ReverseKelements(queue<int>&q, int k)
{
  stack<int>s;
  for(int i=0;i<k; i++)
  {
     s.push(q.front());
     q.pop();
  }

  while(s.empty()==false)
  {
     q.push(s.top());
     s.pop();
  }

  for(int i=1; i<=q.size()-k; i++)
  {
     q.push(q.front());
     q.pop();
  }

  return q;
}

int main()
{
 queue<int> q;
 q.push(10);
 q.push(20);
 q.push(30);
 q.push(40);
 q.push(50);

 int K=3;
 queue<int> M = ReverseKelements(q,K);

 while(q.empty()==false)
 {
    cout<<q.front()<<" ";
    q.pop();
 }
 return 0;
}
