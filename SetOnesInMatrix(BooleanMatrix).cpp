void setZeroes(vector<vector<int>>& matrix) {
        set<int>a;
        set<int>b;
        int r=matrix.size(),c=matrix[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    a.insert(i);
                    b.insert(j);
                }
            }
        }
        
        for(auto x:a)
        {
            for(int i=0;i<c;i++)
            {
                matrix[x][i]=0;
            }
        }
        
        
        for(auto x:b)
        {
            for(int i=0;i<r;i++)
            {
                matrix[i][x]=0;
            }
        }
    }
};






//set ones in matrix
class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        set<int>a;
        set<int>b;
        int r=matrix.size(),c=matrix[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==1)
                {
                    a.insert(i);
                    b.insert(j);
                }
            }
        }
        
        for(auto x:a)
        {
            for(int i=0;i<c;i++)
            {
                matrix[x][i]=1;
            }
        }
        
        for(auto x:b)
        {
            for(int i=0;i<r;i++)
            {
                matrix[i][x]=1;
            }
        }
    }
};