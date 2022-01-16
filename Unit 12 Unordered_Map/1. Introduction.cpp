#include<bits/stdc++.h>
using namespace std;
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

int main()
{
	unordered_map<string, double> um;

	um["PI"] = 3.14;
	um["root2"] = 1.414;
	um["root3"] = 1.732;
	um["log10"] = 2.302;
	um["loge"] = 1.0;

	// inserting value by insert function
	um.insert(make_pair("e", 2.718));

	string key = "PI";

	if (um.find(key) == um.end())
		cout << key << " not found\n\n";
   else
		cout << "Found " << key << "\n\n";

	key = "lambda";
	if (um.find(key) == um.end())
		cout << key << " not found\n";
	else
		cout << "Found " << key << endl;

	unordered_map<string, double>:: iterator itr;
	cout << "\nAll Elements : \n";

	for (itr = um.begin(); itr != um.end(); itr++)
		cout << itr->first << " " << itr->second << endl;
}
