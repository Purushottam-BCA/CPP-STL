#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

int main()
{
 queue<int> q;
 q.push(20);
 q.push(15);
 q.push(99);
 cout<<"20 <- 15 <- 99\n";
 cout<<"FRONT : "<<q.front()<<" REAR : "<<q.back();
 q.push(44);
 q.pop();
 cout<<"\n15 <- 99 <- 44";
 cout<<"\nFRONT : "<<q.front()<<" REAR : "<<q.back();
 nl; nl;
 q.push(88);
 q.push(77);
 cout<<"SIZE : "<<q.size();
 nl;
 while(!q.empty())
 {
    cout<<q.front()<<" ";
    q.pop();
 }
 return 0;
}
