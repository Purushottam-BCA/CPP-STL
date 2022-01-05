#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

// Design a data structure that supporrt InsertMin, insertMax, getMin, getMax, extractMin, extractMax in O(1)

// Solution :: use Deque

deque<int> dq;

void insertMax(int x)
{
   dq.push_back(x);
}

void insertMin(int x)
{
  dq.push_front(x);
}

int getMin()
{
   return dq.front();
}

int getMax()
{
 return dq.back();
}

int extractMax()
{
   int delItem =dq.back();
   dq.pop_back();
   return delItem;
}

int extractMin()
{
   int delItem =dq.front();
   dq.pop_front();
   return delItem;
}

int main()
{
 insertMin(5);
 insertMax(10);
 insertMin(3);
 insertMax(15);
 insertMin(2);
 insertMax(51);
 insertMin(-1);
 insertMax(99);

 for(int x:dq)
   cout<<x<<" ";
 nl;
 cout<<"Max : "<<getMax();
 nl;
 cout<<"Min : "<<getMin();
 nl;
 cout<<"Extract Max : "<<extractMax();
 nl;
 cout<<"Extract Min : "<<extractMin();
 nl;
 cout<<"Max : "<<getMax();
 nl;
 cout<<"Min : "<<getMin();
 nl;
 return 0;
}
