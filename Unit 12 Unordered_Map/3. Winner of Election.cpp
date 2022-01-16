#include <bits/stdc++.h>
using namespace std;

string findWinner(string votes[], int n)
{
    unordered_map<string, int> mp;
    string winner = " ";

    for (int i = 0; i < n; i++)
        mp[votes[i]]++;

    int mx = 0;

    for (auto x:mp)
    {
         if (x.second > mx) {
             mx = x.second;
             winner = x.first;
         }
    }
    return winner;
}

int main()
{
    string votes[] = { "John", "Rohan"," Jackie", "Rohan", "Raju" };
    int n = 5;
    cout << findWinner(votes, n);
}
