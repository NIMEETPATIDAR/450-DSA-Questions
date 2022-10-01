class Solution {
public:
    int solve(int idx , int type ,string &str,vector<vector<int>>&dp){
        //base case
        
        //if idx >= str.size()
        if(idx>=str.size())
            return type==0;
        
        //now idx< str.size()
        if((type==0 && str[idx]=='0')||(type==2 && str[idx]-'0' >6))
           return 0;
        
        //check the cache
        if(dp[idx][type]!=-1)
            return dp[idx][type];
        
        if(type==1 || type ==2)
            return dp[idx][type] = solve(idx+1 , 0 ,str,dp);
        
        //new single digit as well as double digit can be formed 
        if(type ==0){
            int single=0 , doubles=0;
            single = solve(idx+1,0,str,dp);
            if(str[idx]=='1' || str[idx]=='2')
                doubles  = solve(idx+1, str[idx]-'0', str,dp);
            return dp[idx][type] = single + doubles;
        }  
        return 0;
    }
    int numDecodings(string s) {
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(3,-1));
        return solve(0,0,s,dp);
    }
};
