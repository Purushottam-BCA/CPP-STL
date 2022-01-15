#include<bits/stdc++.h>
using namespace std;
#define nl cout<<"\n"

int main()
{
    unordered_set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(15);

    // Traversing the unordered_set
    for(auto it = s.begin(); it!=s.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    cout<<"Size of unordered_set: "<<s.size()<<endl;

    // Clear all elements
    s.clear();

    cout<<"Size after clearing unordered_set: "
        << s.size()<<endl;

    return 0;
}
