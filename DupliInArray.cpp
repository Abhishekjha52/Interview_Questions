//Duplicate in an array
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> duplicates(int a[], int n) 
{
        vector<int>ans;
        int freq[n];
        memset(freq,0,sizeof(freq));
        for(int i=0;i<n;i++)
            freq[a[i]]++;
        for(int i=0;i<n;i++)
        {
            if(freq[i]>1)
                ans.push_back(i);
        }
        if(ans.size()==0)
            ans.push_back(-1);
        return ans;
    }
int main()
{
        int n;cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        vector<ll>ans=duplicates(a, n);
        for(auto x:ans)
                cout<<x<<" ";
        return 0;
}
