class Solution {
public:
    #define MOD 1000000007
    void solve(int i, int j, int r, int c, long long& fproduct, long long product, vector<vector<int>>& grid)
    {
        if(grid[i][j]==0)
        {
            fproduct=max(fproduct, 0LL);
            return;
        }
        product*=grid[i][j];
        if(i==r-1 && j==c-1)
        {
            fproduct=max(fproduct, product);
            return;
        }
        
        if(i+1<r)
            solve(i+1, j, r, c, fproduct, product, grid);
        
        if(j+1<c)
            solve(i, j+1, r, c, fproduct, product, grid);
    }
    int maxProductPath(vector<vector<int>>& grid) {
        int r=grid.size(), c=grid[0].size();
        long long fproduct=-1;
        solve(0, 0, r, c, fproduct, 1, grid);
        return fproduct%MOD;
        
    }
};