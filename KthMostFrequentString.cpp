//Kth Most Frequent String
//Question: Given a list of strings, write a function to get the kth most frequently occurring string.
#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&a,int n, int k)
{
    vector<int>ans;
    priority_queue<pair<int,int>>pq;
    map<int,int>m;
    for(int i=0;i<n;i++)
        m[a[i]]++;
    for(auto x:m)
    {
        pq.push({x.second,x.first});
    }

    while(k-- && !pq.empty())
    {
        ans.push_back(pq.top().first);
        pq.pop();
    }

    for(auto x:ans)
        cout<<x<<" ";
}
int main()
{
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)cin>>v[i];
    int k;cin>>k;
    solve(v,n,k);
    return 0;
}
