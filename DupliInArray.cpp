//Duplicate in an array
vector<int> duplicates(int a[], int n) {
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