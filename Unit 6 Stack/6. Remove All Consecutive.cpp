#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:

    string removeConsecutiveDuplicates(string s)
    {
        string t="";
        stack<char>v;
        for(int i=0;i<s.length();i++)
        {
            if(v.empty()==false && v.top()==s[i])
                continue;
            v.push(s[i]);
            t += v.top();
        }
        return t;
    }
};

int main() {
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.removeConsecutiveDuplicates(s)<<endl;
    }

	return 0;
}  // } Driver Code Ends
