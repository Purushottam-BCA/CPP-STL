#include <deque>
#include <iostream>
using namespace std;

int main()
{
   // Creates an empty Deque
   deque<int> dq;

    dq = { 10, 20, 30, 40, 50 };

   // Push element at back
   dq.push_back(10);

   // Push element at front
   dq.push_front(20);

   // Traversing the Deque using foreach loop
   cout << "Deque : ";
   for (auto x : dq)
      cout << x << " ";

   cout<<"\n";
   // The Deque is: 20 10
   // Access front and back elements of the Deque
   cout << "dq.front() : " << dq.front();
   cout << "\ndq.back() : " << dq.back();

   return 0;
}
