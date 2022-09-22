class Solution 
{
public:
    string reverseWords(string s) 
    {
        int initialPoint=0;
        int endPoint=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                endPoint=i-1;
                reverse(s.begin()+initialPoint,s.begin()+endPoint+1);
                initialPoint=i+1;
            }
        }
        reverse(s.begin()+initialPoint,s.end());
        return s;
    }
};




/*
class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]==' ')
            {
                reverse(s.begin()+i,s.begin()+j);
                i=j+1;
            }
        }
        reverse(s.begin()+i,s.end());
        return s;
    }
};
*/

