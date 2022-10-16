class Solution 
{
public:
    bool isPalindrome(string s) 
    {
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=97 && s[i]<=122 || s[i]>=65 && s[i]<=90 || s[i]>=48 && s[i]<=57) 
            {
                s[j]=tolower(s[i]);
                j++;
            }
        }
        int l=0;
        int k=j-1;
        while(l<k)
        {
            if(s[l]!=s[k]) return false;
            l++;
            k--;
        }
        return true;
    }
};