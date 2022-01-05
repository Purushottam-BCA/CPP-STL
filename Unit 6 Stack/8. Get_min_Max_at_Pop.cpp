#include <bits/stdc++.h>
using namespace std;


stack<int> _push_normal(int arr[],int n)
{
   stack<int> s;

   for(int i = 0; i<n; i++)
      s.push(arr[i]);
   return s;
}

stack<int> _push(int arr[],int n)
{
   stack<int> s;
   int minn = INT_MAX;

   for(int i = 0; i<n; i++)
   {
       minn = min(arr[i], minn);   // Storing Min Value Each Time & Compare with Current
       s.push(minn);
   }
    return s;
}

stack<int> _push2(int arr[],int n)
{
   stack<int> s;
   int maxm = INT_MIN;

   for(int i = 0; i<n; i++)
   {
       maxm = max(arr[i], maxm);   // Storing Min Value Each Time & Compare with Current
       s.push(maxm);
   }
    return s;
}

//Function to print value in stack each time while popping.
void _getItemAtPop(stack<int>s,stack<int>s2,stack<int>s3)
{
    cout<<"Stack"<<"\t"<<"MIN"<<"\t"<<"MAX \n";
    while(s.empty()==false )
    {
        cout<<" "<<s.top()<<"\t"<<s2.top()<<"\t"<<s3.top()<<endl;
        s.pop();
        s2.pop();
        s3.pop();
    }
    cout<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];

       stack<int>Stack = _push_normal(arr,n);
	    stack<int>MinAtTop = _push(arr,n);
	    stack<int>MaxAtTop = _push2(arr,n);

	    _getItemAtPop(Stack,MinAtTop,MaxAtTop);  // For Min
	}
	return 0;
}
