#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

   //Function to find maximum of minimums of every window size.
    vector <int> maxOfMinOfEach(int arr[], int n)
    {
        //stack used to find previous and next smaller numbers.
        stack<int> s;

        //using arrays to store previous and next smaller numbers.
        int left[n + 1];
        int right[n + 1];

        //initializing Deafult value of left[] as -1 and right[] as n
        for (int i = 0; i < n; i++)
         {
            left[i] = -1;
            right[i] = n;
         }

        //filling elements of left[] using logic of previous smaller element
        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && arr[i]<= arr[s.top()])
               s.pop();

            // If stack empty then it menas no eleemnt smaller in left side so , it remail default as -1
            if (!s.empty()) left[i] = s.top();

            s.push(i);
        }

        //Emptying the stack as stack is going to be used for right[].
        while (!s.empty())
            s.pop();

        //Filling elements of right[] using same logic.
        for (int i = n - 1; i >= 0; i--)
        {
            while (!s.empty() && arr[i]<=arr[s.top()])
               s.pop();

            if (!s.empty()) right[i] = s.top();

            s.push(i);
        }

        //Creating and initializing answer list.
        int ans[n + 1];
        for (int i = 0; i <= n; i++)
            ans[i] = 0;

        //Filling answer list by comparing minimums of all
        //lengths computed using left[] and right[].
        for (int i = 0; i < n; i++)
        {
            //length of the interval.
            int len = right[i] - left[i] - 1;

            //arr[i] is a possible answer for this length 'len' interval,
            //check if arr[i] is more than max for 'len'.
            ans[len] = max(ans[len], arr[i]);
        }

        //some entries in ans[] may not be filled yet. Filling
        //them by taking values from right side of ans[].
        for (int i = n - 1; i >= 1; i--)
            ans[i] = max(ans[i], ans[i + 1]);

        vector <int> res (n);
        for (int i = 1; i <= n; i++)
            res[i-1] = ans[i];

        //returning the answer list.
        return res;
    }

int main()
{
 int arr[] = {10,20,30,50,10,70,30};
 vector<int>v = maxOfMinOfEach(arr,7);
 for(int x:v)
   cout<<x<<" ";
 return 0;
}
