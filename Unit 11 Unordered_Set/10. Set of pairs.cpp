/*
   By default, C++ does not allow us to create an unordered set of pairs directly
   but one can pass a hash function to the unordered set container.

   Syntax - unordered_set<pair<dataType1, dataType2>, hashFunction> myUnorderedSet;
*/

#include <bits/stdc++.h>
using namespace std;

// Hash function
struct hashFunction
{
   size_t operator()(const pair<int ,int> &x) const
   {
      return x.first ^ x.second;
   }
};

void print(unordered_set<pair<int, int>,hashFunction> &myUnorderedSet)
{
   for (auto curr : myUnorderedSet)
      cout << "[ "<< curr.first << " " << curr.second << " ]" << "\n";
}

int main()
{
   unordered_set<pair<int, int>,hashFunction> myUnorderedSet;
   pair<int, int> pair1 = {4, 2};
   pair<int, int> pair2 = {2, 3};
   pair<int, int> pair3 = {2, 3};
   pair<int, int> pair4 = {5, 8};
   pair<int, int> pair5;
   pair5 = make_pair(4, 2);

   myUnorderedSet.insert(pair1);
   myUnorderedSet.insert(pair2);
   myUnorderedSet.insert(pair3);
   myUnorderedSet.insert(pair4);
   myUnorderedSet.insert(pair5);

   // Calling print function
   print(myUnorderedSet);

   return 0;
}

