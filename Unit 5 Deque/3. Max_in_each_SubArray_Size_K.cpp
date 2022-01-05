#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

/*
Problem: Given an array and an integer K, find the maximum for each and every contiguous subarray of size k.

Examples :

Input: arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6}, K = 3
Output: 3 3 4 5 5 5 6

All Windows of Size K=3 => (1,2,3) (2,3,1) (3,1,4) (1,4,5) (4,5,2) (5,2,3) (2,3,6)
                              |       |       |       |       |       |       |
Output =>                     3       3       4       5       5       5       6

------------------------------------------------------------------------------------------------------------
Input: arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13}, K = 4
Output: 10 10 10 15 15 90 90

All Windows of Size K=4 => (8,5,10,7) (5,10,7,9) (10,7,9,4) (7,9,4,15) (9,4,15,12) (4,15,12,90) (15,12,90,13)
                               |          |          |          |           |           |            |
Output =>                     10         10         10          15          15          90           90


----*----*----*----*----*----*----*----*----*----*----*----*----*----*----*----*----*----*-----

TOTAL NUMBER OF WINDOWS OF SIZE K = N-K+1
Ex:-
   Question 1 : N = 9   k = 3   So, Total contigeous Subarray of size 3 = 9 - 3 + 1 = 7
   Question 2 : N = 10  k = 4   So, Total contigeous Subarray of size 4 = 10 - 4 + 1 = 7
*/

// O(n^2) Approach

void Max_subArray(int arr[], int n, int k)
{
   int temp[n-k+1]; // Creating a temperory array of size of Total SubArray (N-K+1)

   for(int i=0;i<=n-k ;i++) // loop will run only 0 to N-K+1 ( because Last Window =>  N - K + K = N )
   {                        // In each loop run from Item's next to next k element and search for max element in Window
      int max1 = arr[i];    // Store Current Value as max
      for(int j = i+1; j<i+k; j++) // Search for Biggest in current Window ( i+1 to i+k ) ; DO it for each element
      {
         if(arr[j]>max1)
            max1 = arr[j];
      }
      temp[i] = max1; // Store max Element
   }
   for(int x:temp) // Printing All Elelemnt
      cout<<x<<" ";
}

// Approach-2 :: O(n) using Deque
/*
   1. Create a Deque, dq of size K, that stores only useful elements of current window of k elements.
   2. Useful means if it is in current window and is greater than other elements on left side of it in current window.
   3. HERE WE WILL STORE INDEXES NOT THE VALUE
   4. Maintain dq to contain useful elements of current window and maintained in sorted order.

   5. The element at front of the dq is the largest and element at rear of dq is the smallest of current window.
   6. When an greater or equal element came then we remove all smaller element from Deque_back()
   7. When a smaller element came then it may be possible that this smaller can be greater element of next window
      so we push_back() it

--------------------------ALGORITHM-------------------------------

   This problem is divided into three parts.

   1. First we will scan in first window ( 0 to K-1 )
      (1)  While(Deque.empty() == False && Arr[i] >= Arr[Deque.back()])then keep Deque.Pop_Back()
           because we will keep only bigger value till now.
      (2)  at last simply insert Index. Deque.push_back(i)

   2. Now we will scan from 2nd Window : Because we have already processed 1st Window.
      Which means from Kth Element to Last element. For(i=K; i<n;i++)

      (1)  Insert Front Item (maximum from last window) in the Vector. Vector.push_back(arr[Dq.front()])
      (2)  Removing the index of Previous window becuase it is useless now.[ if Deque is full ]
           While( Deque.empty() == false && Deque.front() <= i-K ) Or (Deque.size()==K)
               Deque.pop_front();
      (3)  Now maintaing the Xam Element at front and Min Element at Last.
           While( Deque.empty() == False && Arr[i] >= Arr[Deque.back()]) Then remove the existing smaller at last
                  Deque.pop_back();
      (4)  At last Insert index (i) into Deque.
            Deque.push_back(i)

   3. All Maximums are at Correct Places except Last One. Which is current deque.Front()
      V.push_back(Arr[Deque.front()]);

      RETURN Vector;
*/
void Max_in_SubArray(int arr[], int n, int k)
{
   deque<int>dq;

   // Part 1 : First Window
   for(int i=0;i<k; i++)
   {
      while(dq.empty()==false && arr[i]>=arr[dq.back()])
         dq.pop_back();

      dq.push_back(i);
   }

   // Part 2 : 2nd Window to Last Window
   for(int i=k;i<n; i++)
   {
      cout<<arr[dq.front()]<<" ";

      while(dq.empty()==false && dq.front()<=i-k)  // if deque is full Delete from Front
         dq.pop_front();

      // Setting max element at front & Low element at the End
      while(dq.empty()==false && arr[i]>=arr[dq.back()])
         dq.pop_back();

      dq.push_back(i);
   }
   // Part 3: printing max element of Last Window
   cout<<arr[dq.front()]<<endl;
}

int main()
{
   int arr[] = {10,8,5,12,15,7,6};
   Max_subArray(arr,7,3);
   nl;
   Max_in_SubArray(arr,7,3);
   nl;
   int arr2[] = {20,5,3,8,6,15};
   Max_subArray(arr2,6,4);
   nl;
   Max_in_SubArray(arr2,6,4);
   nl;
   int arr3[] = {1,2,3,1,4,5,2,3,6};
   Max_subArray(arr3,9,3);
nl;
   Max_in_SubArray(arr3,9,3);

}
