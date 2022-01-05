#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

// N & K is given.
// N is Total number of people with ID [0....N-1]
// K is the position of person which will be killed in each iteration
// Find the ID of Last Surviver
// last remaining element will be the surviver

int LastSurviver(int n, int k)
{
   list<int> l;

   for(int i=0 ; i<n ; i++)
      l.push_back(i);

   auto it = l.begin();

   while(l.size()>1) // Till it should be left with only one element
   {
      for(int i=1; i<k; i++)
      {
         it++;
         if(it==l.end())
            it=l.begin();
      }
      it = l.erase(it);
      if(it==l.end())
         it = l.begin();
   }
   return *(l.begin())+1;
}

// Approach-2


// Approach-3

/*
   3 step solution:

   first:- convert the N(given) into respective binary and store each element of the binary into an array
   second:- remove/pop out the 0th index element from the array and append/add/insert it at last
   third:- join all the elements in the array and convert it into decimal and return the result.

   ******
   In the pattern we can see that at every n where n is a power of 2, the pattern restarts and proceeds till it reaches the next value which is a power of 2.

   My intuition was to find the nearest least power of 2,
      use it to remove MSB (most significant bit) of given n.
      Use the MSB removed n and do left shift once,
      and finally add 1.

*/

int find(int n)
{
   int x=log2(n); //to find nearest least power of 2
   n = ( n & ~(1<<(x))); //remove MSB
   n=n<<1; //left shift once
   return n+1; //add 1 and return
}
int main()
{
   int T;
   cin>>T;

   while(T--)
   {
      int N,K;
      cin>>N>>K;
      cout<<LastSurviver(N,K);
      nl;
   }
 return 0;
}
