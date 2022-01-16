#include <bits/stdc++.h>
using namespace std;

string findWinner(string votes[], int n)
{
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++)
        mp[votes[i]]++;

    string winner = "";
    int mx = -1;

    for (auto x:mp) {
      if (( x.second > mx)|| ((x.second == mx) && (x.first < winner)))
      {
            mx = x.second;
            winner = x.first;
      }
    }
    return winner;
}

int main()
{
    string votes[] = { "John", "Rohan","Jackie", "Rohan","Raju", "Jackie" };
    int n = 6;
    cout << findWinner(votes, 6);
}
