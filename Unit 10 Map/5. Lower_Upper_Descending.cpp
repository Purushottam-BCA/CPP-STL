#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int, greater<int>> mp;

    mp.insert({ 12, 30 });
    mp.insert({ 11, 10 });
    mp.insert({ 15, 50 });
    mp.insert({ 13, 40 });

    auto it = mp.upper_bound(13);
    if(it != mp.end())
      cout << (*it).first << " " << (*it).second << endl;
    else
      cout<<"Smaller than Smallest";

    for (it = mp.begin(); it != mp.end(); it++)
        cout << (*it).first << " " << (*it).second << endl;

    mp.erase(12); // Delete Key-Value from MAP

    cout<<"----------------------------------\n";
    for (it = mp.begin(); it != mp.end(); it++)
        cout << (*it).first << " " << (*it).second << endl;

    return 0;
}
