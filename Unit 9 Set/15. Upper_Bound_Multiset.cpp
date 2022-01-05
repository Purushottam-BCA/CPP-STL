#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> s;

    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(9);
    s.insert(4);
    s.insert(14);
    s.insert(4);

    cout << "The Multi Set elements are : ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    // when 4 is present
    auto it = s.upper_bound(4);
    cout << "\nThe upper bound of key 4 is ";
    cout << (*it) << endl;

    // when 2 is not present
    // points to next greater after 2
    it = s.upper_bound(2);
    cout << "The upper bound of key 2 is ";
    cout << (*it) << endl;

    // when 10 exceeds the max element in multiset
    it = s.upper_bound(20);
    cout << "The upper bound of key 10 is ";
    cout << (*it) << endl;

    return 0;
}
