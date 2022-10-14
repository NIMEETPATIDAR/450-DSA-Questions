class Solution 
{
public:
    vector<int> getRow(int rowIndex) 
    {
        if(rowIndex==0) return {1};
        vector<int> currentRow={1};
        vector<int> previousRow=getRow(rowIndex-1);
        for(int i=1;i<rowIndex;i++)
        {
            currentRow.push_back(previousRow[i-1]+previousRow[i]);
        }
        currentRow.emplace_back(1);
        return currentRow;
    }
};