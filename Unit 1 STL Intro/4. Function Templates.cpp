#include<bits/stdc++.h>
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
using namespace std;

template <typename T>

T arrMax(T arr[], int N)
{
   T max_Value = arr[0];
   for(int i=0; i<N; i++)
   {
      if(arr[i]>max_Value)
         max_Value = arr[i];
   }
   return max_Value;
}

int main()
{
 int a[]{5,22,6,29,29,11,8};
 cout<<arrMax<int>(a,len(a));
nl;
 char ar[]{'A','m','5','S'};
 cout<<arrMax<char>(ar,len(ar));
nl;
 float arr[]{15.2f,22,6.2f,29.7f,59.64f,59.640f};
 cout<<arrMax<float>(arr,len(arr));

 return 0;
}
