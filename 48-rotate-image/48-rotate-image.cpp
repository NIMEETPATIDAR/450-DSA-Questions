class Solution 
{
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                int k=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=k;
            }        
        }
        
        for(int i=0;i<matrix.size();i++)
        {
            int m=matrix.size()-1;
            for(int j=0;j<m;j++,m--)
            {
                int k=matrix[i][j];
                matrix[i][j]=matrix[i][m];
                matrix[i][m]=k;
            }        
        }

    }
};