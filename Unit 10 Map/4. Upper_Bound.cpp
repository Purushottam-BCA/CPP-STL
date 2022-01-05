#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp;

    mp.insert({ 12, 30 });
    mp.insert({ 11, 10 });
    mp.insert({ 15, 50 });
    mp.insert({ 14, 40 });

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    // when 11 is present
    auto it = mp.upper_bound(11);
    cout << "The Upper bound of key 11 is ";
    cout << (*it).first << " " << (*it).second << endl;

    // when 13 is not present points to next greater after 3
    it = mp.upper_bound(13);
    cout << "The Upper bound of key 13 is ";
    cout << (*it).first << " " << (*it).second;

    // when 17 exceeds
    it = mp.upper_bound(17);
    cout << "\nThe Upper bound of key 17 is ";
    cout << (*it).first << " " << (*it).second;
    return 0;
}
