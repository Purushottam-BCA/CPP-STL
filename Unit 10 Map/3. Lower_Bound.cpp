#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp;

    mp.insert({ 2, 30 });
    mp.insert({ 1, 10 });
    mp.insert({ 6, 50 });
    mp.insert({ 4, 40 });

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    // when 2 is present
    auto it = mp.lower_bound(2);
    cout << "The lower bound of key 2 is ";
    cout << (*it).first << " " << (*it).second << endl;

    // when 3 is not present points to next greater after 3
    it = mp.lower_bound(3);
    cout << "The lower bound of key 3 is ";
    cout << (*it).first << " " << (*it).second;

    // when 6 exceeds
    it = mp.lower_bound(8);
    cout << "\nThe lower bound of key 6 is ";
    cout << (*it).first << " " << (*it).second;
    return 0;
}
