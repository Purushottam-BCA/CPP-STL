#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

int main()
{
 int N;
 cin>>N;
 queue<string>q;

 q.push("1");
 q.push("2");
 q.push("3");
 q.push("4");
 q.push("5");
 q.push("6");
 q.push("7");
 q.push("8");
 q.push("9");

  for(int i=1; i<=N; i++)
  {
    string pop_item = q.front();
    q.pop();
    cout<<pop_item<<" ";
    if(N>9)
    {
      for(int j=0;j<10;j++)
        q.push(pop_item+to_string(j));
    }
  }
}
