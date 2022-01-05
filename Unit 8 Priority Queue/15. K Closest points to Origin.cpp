#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

void K_Closest_Origin(const vector<pair<int,int>>&v, int k)
{
  int dist;
  priority_queue<pair<int,pair<int,int>>> p;
  for(int i=0; i<v.size(); i++)
  {
    int x = v[i].first;
    int y = v[i].second;

    dist = (x*x)+(y*y);    // Storing Only X^2+Y^2  -- Optimization 1
    p.push({dist,{x,y}});  // Can Store Only Index  -- Optimization 2
    if(p.size()>k)
      p.pop();
  }

  while(p.empty()==false)
  {
    cout<<"("<<p.top().second.first<<","<<p.top().second.second<<")";
    p.pop();
    nl;
  }

}

// LeetCode Solution
class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>>& v, int k)
    {
        vector<vector<int>>v1;
        if(v.size()==0)
            return v1;

        priority_queue<pair<long int,int>>p;

        for(int i=0;i<v.size();i++)
        {
            int x = v[i][0];
            int y = v[i][1];

            long int d = ((x*x)+(y*y))%1000000007;

            p.push({d,i});

            if(p.size()>k) p.pop();
        }

        while(p.empty()==false)
        {
            v1.push_back({v[p.top().second][0],v[p.top().second][1]});
            p.pop();
        }
        return v1;
    }
};
//------------------------------------------
int main()
{
  vector<pair<int,int>>v;
  v.push_back({1,3});
  v.push_back({5,1});
  v.push_back({-2,2});
  v.push_back({5,8});
  v.push_back({1,2});

  K_Closest_Origin(v,2);
  return 0;
}
