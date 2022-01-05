#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

// Reversing String
string ReverseStr(string &str)
{
   stack<char> s;
   for(char ch:str)
      s.push(ch);

   int i=0;
   while(s.empty()==false)
   {
      str[i++] = s.top();
      s.pop();
   }
   return str;
}

// Reversing Single Linked List
void Forward_List_Reverse(forward_list<int> &f)
{
   stack<int> s;

   for(int x:f)
   {
      s.push(x);
      cout<<x<<" ";
   }
   nl;

   f.clear();

   f.push_front(s.top());
   s.pop();

 //  cout<<std::boolalpha<<f.empty()<<"STACK : "<<s.empty()<<endl;

   auto it = f.begin();

   while(s.size()>0)
   {
    it = f.insert_after(it,s.top());
    s.pop();
   }

   for(int x:f)
      cout<<x<<" ";

}

int main()
{
   forward_list<int> f={10,15,20,30,40,19,84,53};
   Forward_List_Reverse(f);
/*
   string str="ABCD";
   cout<<"Reverse of "<<str<<" : "<<ReverseStr(str);
 */
 return 0;
}
