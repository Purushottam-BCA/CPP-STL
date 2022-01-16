#include <bits/stdc++.h>
using namespace std;

void printFrequencies(int arr[], int n)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    for(auto x : mp)
      cout<< x.first << "-" << x.second << endl;
}

int main()
{
    int arr[] = { 10, 20, 20, 10, 10, 5, 15 };
    int n = 8;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    printFrequencies(arr, 7);
    return 0;
}
