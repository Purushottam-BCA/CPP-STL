/*
** Shopkeeper Profit **

Ram makes a plan for the new year. He decides to sell the products and writes down the price for N days.
The prices are denoted by an array V[] of N elements. Looking at the sequence he decides that for the ith product,
he is going to get a profit that equals to (Vj - Vi), where j is the lowest index just greater than i and Vj >= Vi.
If there is no such j, then his profit will be equal to Vi. Find the total profit of Ram.

Example 1 :

Input:
1
5
5 4 6 2 1

Output:
12

Explanation :

For 5 : Nearest max value = 6  So Profit = 6-5 = 1
For 4 : Nearest max value = 6  So Profit = 6-4 = 2
For 6 : No Max value available So Profit = 6   = 6
For 2 : No Max value available So Profit = 2   = 1
For 1 : No Max value available So Profit = 1   = 1
                                 """"""""""""""""""
                                 Total Profit = 12
                                 """"""""""""""""""
Constraints:
1 <= N <= 105
1 <= Vi <= 103
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int profit(vector<int>V)
    {
        int n = V.size();
        int sum = V[n-1];

        stack<int>s;
        s.push(sum); // For last Item there was not any Profit Ahead

        for(int i = n-2 ; i>=0; i-- )
        {
            while(s.empty()==false && V[i]>s.top())
                s.pop();

            // If Stack Empty means No Bigger Value is ahead so Profit = A[i] Itself
            // Else If Stack is not empty then in that case Stack.TOP() is the nearest Max Value
            // So subtract Current Value A[i] from S.TOP()

            int profit = (s.empty()?V[i]:(s.top()-V[i]));
            sum += profit;

            s.push(V[i]);
        }
        return sum;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        Solution ob;
        int ans=ob.profit(v);
        cout<<ans<<endl;
    }
    return 0;
}
