/*
   Problem: Given a string of expression, evaluate the eqivalent Postfix expression for it.

   Examples:
   Input: "231*+9-"
   Output: -4

   Input: "570*+6-"
   Output: -1

------------------------------------------------------------------------------------------------

Step 1: Create a Stack to store operands(values)

Step 2: Scan the given expression and do following for every scanned element.

         If the element is a number, push it into the stack

         If the element is an operator, pop operands for the operator from the stack. Evaluate the operator
         and push the result back to the stack.

Step 3: When the expression ends, the number in the stack is the final answer

*/


#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

int SolvePostfix(const string &str)
{
   int len = str.length();
   stack<int>s;
   char ch;
   int a, b;
   for(int i=0;i<len; i++)
   {  // 231*+9-
      ch = str[i];
      if(isdigit(ch))
         s.push(ch-48);
      else // in case of operators
      {
         // getting Top two values from the stack

         b = s.top();  // this is second Value. because stack operate LIFO
         s.pop();

         a = s.top(); // This is first value
         s.pop();

         switch(ch)
         {
         case '+':
             s.push(a+b);
             break;
         case '-':
            s.push(a-b);
            break;
         case '*':
            s.push(a*b);
            break;
         case '/':
            s.push(a/b);
            break;
         }
      }
   }
   return s.top();
}

int main()
{
 string exp;
 int T;
 cin>>T;
 while(T--)
 {
   cin>>exp;
   cout<<SolvePostfix(exp);
   nl;
 }
 return 0;
}
