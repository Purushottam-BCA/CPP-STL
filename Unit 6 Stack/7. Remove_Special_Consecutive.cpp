#include <bits/stdc++.h>
using namespace std;

vector<int> remove_special_consecutive(vector<int>v,int x,int y)
{
    stack <int> s;

    s.push(v[0]); // Storing First Element in the stack

    for(int i=1; i<v.size(); i++)
    {
        if((s.top() == x || s.top()== y) && (s.empty()==false && s.top() == v[i]))
            s.pop();
        else
            s.push(v[i]);
    }

    int len = s.size(); // Push all elements into vector
    vector<int> v1(len);
    while(--len>=0)
    {
        v1[len] = s.top();
        s.pop();
    }
    return v1;
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x); //Input vector elements
	    }

	    int x,y;
	    cin>>x>>y;

	    vector<int>result= remove_special_consecutive(v,x,y);
	    for(auto i:result)
	    {
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
