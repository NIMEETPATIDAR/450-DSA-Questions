class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string s=strs[0];
        int lcf=INT_MAX;
        
        for(int i=1;i<strs.size();i++)
        {
            int count=0;
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==strs[i][j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            lcf=min(lcf,count);
        }
        return s.substr(0,lcf);
    }
};
/*
class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int mi=INT_MAX;
        if(strs.size()==0) return "";
        string c=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            int j=0;
            int k=0;
            int a=0;
            while(j<c.length() && k<strs[i].length())
            {
                if(c[j]==strs[i][k])
                {
                    a++;
                }
                else
                {
                    break;
                }
                j++;
                k++;
            }
            mi=min(mi,a);
        }
        return c.substr(0,mi);
    }
};
*/
