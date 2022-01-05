#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

int main()
{
    map<int, int> m;

    // Insert elements using insert() function
    m.insert({ 10, 100 });
    m.insert({ 30, 300 });

    // Inserting using "[]" operator
    m[20] = 200;

    // Don't provide any value with key 40. The operator access the key and since
    // it does not exists, it will insert default value of int
    m[40];

    // Traversing map
    cout << "The map is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }
    cout << endl;

    // We can also update the value of an existing
    // key-value pair using "[]" operator which
    // is not possible with insert() function
    m[40] = 400;

    // Traversing map
    cout << "\nThe map is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }
    // If exist then return value else Exception
      cout<<m.at(40);
    return 0;
}
