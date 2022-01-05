#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

// Approach - 1 :: Map & Vector
bool mycmp(pair<int,int>p1, pair<int,int>p2)
{
  if(p1.second==p2.second)
    return p1.first<p2.first;

  return p1.second>p2.second;
}

void K_Frequent1(int *arr, int k, int n)
{
  unordered_map<int,int>mp;
  for(int i=0; i<n; i++)
    mp[arr[i]]++;

    vector<pair<int,int>>v(mp.begin(),mp.end());

    sort(v.begin(),v.end(),mycmp);

    for(int i=0; i<k;i++)
      cout<<v[i].first<<" ";
}

// Approach - 2 :: Map & Priority Queue
struct myCmp1
{
  bool operator()(pair<int,int>p1, pair<int,int>p2)
  {
    if(p1.second==p2.second)
      return p1.first>p2.first;
    return p1.second<p2.second;
  }
};

void K_Frequent2(int *arr, int k, int n)
{
  unordered_map<int,int>mp;
  for(int i=0; i<n; i++)
    mp[arr[i]]++;

  priority_queue<pair<int,int>,vector<pair<int,int>>,myCmp1> p (mp.begin(),mp.end());

  for(int i=0;i<k; i++)
  {
    cout<<p.top().first<<" ";
    p.pop();
  }
}

// Approach - 3 :: Optimized of Second

struct mycmp2  // Works on True Condition
{
  bool operator()(pair<int,int>p1, pair<int,int>p2)
  {
    if(p1.second==p2.second)
      return p1.first<p2.first;
    return p1.second>p2.second;
  }
};

void K_Frequent3(int *arr, int k, int n)
{
  unordered_map<int,int>mp;
  for(int i=0; i<n; i++)
    mp[arr[i]]++;

  priority_queue<pair<int,int>,vector<pair<int,int>>,mycmp2>p;

  for(auto i=mp.begin();i!=mp.end();i++)
  {
    p.push({i->first, i->second});

    if(p.size()>k)
      p.pop();
  }

  while(p.empty()==false)
  {
    cout<<p.top().first<<" ";
    p.pop();
  }
}

// Approach - 4 :: Linear Time Without Order of Element Using Array of Vectors
void K_Frequent4(int arr[], int k, int n)
{
  unordered_map<int,int>mp;
  for(int i=0; i<n; i++)
    mp[arr[i]]++;

  // 2D Vector Where Index Represents the Total Frequency
  vector<int>freq[n+1];

  for(auto x:mp) // Traversing In Map and Storing Each Item of Index as Frequency
    freq[x.second].push_back(x.first);

  int counter = 0;
  for(int i=n;i>=0;i--) // Traverse from End SO that Larger frequency Appear First
  {
    for(int x:freq[i])
    {
      cout<<x<<" ";
      counter++;
      if(counter==k)
        return;
    }
  }
}

// Approach - 5 :: Linear Time With Order of Element By Traversing The Actual Array
void K_Frequent5(int *arr, int k, int n)
{
  unordered_map<int,int>mp;
  for(int i=0; i<n; i++)
    mp[arr[i]]++;

  vector<int> freq[n+1];

  for(int i=0;i<n;i++)
  {
    int x = mp[arr[i]];
    if(x!=-1) // If this is unique element
    {
     freq[x].push_back(arr[i]);
     mp[arr[i]]=-1;
    }
  }

  int counter = 0;
  for(int i=n;i>=0;i--) // Traverse from End SO that Larger frequency Appear First
  {
    for(int x:freq[i])
    {
      cout<<x<<" ";
      counter++;
      if(counter==k)
        return;
    }
  }
}

int main()
{
  int arr[] = {1,2,1,3,2,3,4,4,4};
  K_Frequent5(arr,3,9);
  return 0;
}
