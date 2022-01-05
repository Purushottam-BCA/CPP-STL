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

    auto it = s.equal_range(3);
    cout<<endl<<(*it.first)<<" "<<(*it.second);


    it = s.equal_range(14);
    cout<<endl<<(*it.first)<<" "<<(*it.second);

    it = s.equal_range(50);
    cout<<endl<<(*it.first)<<" "<<(*it.second);

    return 0;
}
