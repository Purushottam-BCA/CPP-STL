/*
   Problem : Given a number n, print first n numbers in increasing order such that all these
             numbers have digits in set {5, 6}.

             I/P :: N = 4
             O/P :: 5 6 55 56

             I/P :: N = 12
             O/P :: 5 6 55 56 65 66 555 556 565 566 655 656

             Note: n can be a big number and the result values might not fit in basic data types
             like long int or long long int. So HERE WE WILLL CONSIDER NUMBERS AS STRING

   Approach:
            1. We create a queue and add string element "5 and "6" to the queue.
            2. Then we run the loop n number of times and every time pop the top element
               and add two successive elements into the queue.
            3. The successive elements or the increasing order of the combination of 5 and 6 can be achieved by
               implementing a tree in the following way.
            4. In this tree, the node is an empty string followed by the successive combinations of 5 and 6,
               as shown in this picture.

*/

#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

void printNTerms(int a, int b,int n)
{
   queue<string> q;

   string a1 = to_string(a);
   string a2 = to_string(b);

   q.push(a1);
   q.push(a2);

   for(int i=1; i<=n; i++)
   {
      string pop_item = q.front();
      q.pop();
      cout<<pop_item<<" ";
      q.push(pop_item+a1);
      q.push(pop_item+a2);
   }
}

int main()
{
 int T,N,a,b;
 cin>>T;

 while(T--)
 {
   cin>>a>>b;
   cin>>N;
   printNTerms(a,b,N);
 }
 return 0;
}
