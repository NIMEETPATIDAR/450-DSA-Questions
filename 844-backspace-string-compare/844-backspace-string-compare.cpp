class Solution 
{
public:
    bool backspaceCompare(string s, string t) 
    {
        int i=0;
        int j=0;
        for(int x=0;x<s.size();x++)
        {
            if(s[x]!='#')
            {
                s[i]=s[x];
                i++;
            }
            else if(i>0)
            {
                i--;
            }
        }
        for(int x=0;x<t.size();x++)
        {
            if(t[x]!='#')
            {
                t[j]=t[x];
                j++;
            }
            else if(j>0)
            {
                j--;
            }
        }
        if(i!=j) return false;
        for(int x=0;x<i;x++)
        {
            if(s[x]!=t[x]) return false;
        }
        return true;
    }
};