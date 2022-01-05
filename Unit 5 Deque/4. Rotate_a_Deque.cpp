#include <deque>
#include <iostream>

using namespace std;

// Left Rotate
// 1 2 3 4 5 6 :: K=2   ==>  3 4 5 6 1 2
void rotateDeque(deque<int> &dq, int k)
{
   for(int i=1; i<=k; i++)
   {
      dq.push_back(dq.front());
      dq.pop_front();
   }
}

// Right Rotate
// 1 2 3 4 5 6 :: K=2   ==> 5 6 5 1 2 3 4
void rotateDeque2(deque<int> &dq, int k)
{
   for(int i=1; i<=k; i++)
   {
      dq.push_front(dq.back());
      dq.pop_back();
   }
}

int main()
{
    deque<int> dq = { 2, 8, 5, 12, 10, 15, 30 };

    cout << "Current Deque: ";
    for (int i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";
    cout << endl;

    rotateDeque(dq,3);

    cout << "Rotated Deque : ";
    for (int i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";
    cout << endl;
    return 0;
}
