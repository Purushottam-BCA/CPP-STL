#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

class Solution
{
    public:

    // Approach 1 :: Using Nested Loop O(n
      vector<int> maxOfMin(int arr[], int n)
      {
         vector<int>v;
         for(int i=1; i<=n; i++) // All Window Size (1 to N)
         {
            // Current window size = i
            int max_Of_Min = INT_MIN; // for each window , it stores the maximum of min

            for(int j=0; j<n-i+1; j++) // Total No of Windows in current size
            {
               int minm = arr[j]; // Store 1st value as min value fpr each window

               for(int k=j+1; k<j+i; k++) // Loop for every element in each windows
               {
                  // k+j : means we have to search in current window
                  if(arr[k]<minm)
                     minm = arr[k];
               }
               if(minm > max_Of_Min)
                  max_Of_Min = minm;
            }
            v.push_back(max_Of_Min);
         }
         return v;
      }

    // BEST APPROACH : Function to find maximum of minimums of every window size.
    vector <int> maxOfMin2(int arr[], int n)
    {
        int prev[n], next[n];
        stack<int> s;

        for(int i=0;i<n;i++)
        {
            while(s.size()>0 and arr[s.top()]>=arr[i])
            {
                next[s.top()] = i;
                s.pop();
            }

            if(s.empty() or (!s.empty() and arr[s.top()]==arr[i]))
               prev[i] = -1;
            else
               prev[i] = s.top();

            s.push(i);
        }

        while(s.empty()==false)
        {
            next[s.top()] = n;
            s.pop();
        }

        vector<int> ans(n,0);

        for(int i=0;i<n;i++)
        {
           int len = next[i]-prev[i]-1;
           ans[len-1] = max(ans[len-1],arr[i]);
        }

        for(int i=n-2;i>=0;i--)
            ans[i] = max(ans[i],ans[i+1]);

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
           cin >> a[i];

        Solution ob;

        vector <int> res = ob.maxOfMin2(a, n);
        for (int i : res)
            cout << i << " ";

        cout << endl;
    }
    return 0;
}
