class Solution 
{
public:
    bool hasAllCodes(string s, int k) 
    {
        map<int,int> mp;
        int n=s.size();
        for(int i=0;i<n-k+1;i++)
        {
            string tmp=s.substr(i,k);
            int t=stoi(tmp,NULL,2);
            mp[t]++;
        }
        
        for(int i=0;i<pow(2,k);i++)
        {
            if(mp.find(i)==mp.end()) return false;
        }
        return true;
    }
};