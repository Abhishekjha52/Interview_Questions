//Function to return length of longest subsequence of consecutive integers.
BRUTEFORCE:
    int findLongestConseqSubseq(int a[], int n)
    {
        int count=0,ans=0;
        sort(a,a+n);
        vector<int>v;
        v.push_back(a[0]);
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])
                v.push_back(a[i]);
        }
        for(int i=0;i<v.size();i++)
        {
            if(i>0 && v[i]==v[i-1]+1)
                count++;
            else
                count=1;
                
            ans=max(ans,count);
        }
        
        return ans;
    }
EFFICIENT:
	int findLongestConseqSubseq(int arr[], int n)
    {
        //using a Set to store elements.
        unordered_set<int> s;
        int ans = 0;
 
        //inserting all the array elements in Set.
        for (int i = 0; i < n; i++)
            s.insert(arr[i]);
 
        //checking each possible sequence from the start.
        for (int i = 0; i < n; i++)
        {
           //if current element is starting element of a sequence then only 
           //we try to find out the length of sequence.
           if (s.find(arr[i] - 1) == s.end())
           {
               
                int j = arr[i];
                //then we keep checking whether the next consecutive elements
                //are present in Set and we keep incrementing the counter.
                while (s.find(j) != s.end())
                j++;
 
            //storing the maximum count.
            ans = max(ans, j - arr[i]);
            }
        }
        //returning the length of longest subsequence
        return ans;
    }
