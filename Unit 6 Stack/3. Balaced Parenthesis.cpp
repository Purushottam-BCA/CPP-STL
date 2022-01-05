#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

bool matching(char a, char b)
{
   return ((a=='(' && b==')')||(a=='{' && b=='}')||(a=='[' && b==']'));
}

bool isBalanced(const string &str)
{
   stack<char> s;

   for(char ch: str)
   {
      if(ch=='(' || ch=='[' || ch=='{')
            s.push(ch);
      else
      {
         if(s.empty()==true) return false; // In case there was No Opening Brackert for any closing Bracket
         else if(matching(s.top(),ch)==false) return false;
         else s.pop();
      }
   }
   // In case there are more oipening bracket than Closing Bracket.
   return (s.empty()==true);
}

int main()
{
 int T;
 cin>>T;
 string str;
 while(T--)
 {
    cin>>str;
    cout<<std::boolalpha<<isBalanced(str)<<endl;
 }
 return 0;
}
