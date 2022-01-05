#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

int main()
{
    map<int, int> mp;

    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 20 });
    mp.insert({ 4, 50 });

    // Check if the element 3 exists in the map or not
    if (mp.find(3) != mp.end())
        cout << "3 Found!\n\n";
    else
        cout << "3 Not Found!\n";

    cout << "The elements from position 3 in map are : \n";
    cout << "KEY\tELEMENT\n";

    // find() function finds the position at which 3 is
    for (auto itr = mp.find(2); itr != mp.end(); itr++)
        cout << itr->first << '\t' << itr->second << '\n';

    // Using count to check if the key 4 exists
    if (mp.count(4) != 0)
        cout << "\n4 Found!\n";
    else
        cout << "\n4 Not Found!\n";

    return 0;
}
