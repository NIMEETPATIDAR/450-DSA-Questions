class Solution {
public:
    string addBinary(string a, string b) 
    {
        int n = a.size(), m = b.size();
        int i = n-1 , j = m-1;
        int carry = 0;
        string ans = "";
        while(i >= 0 || j >= 0)
        {
            int val1 = (i >= 0) ? a[i]-'0' : 0 ;
            int val2 = (j >= 0) ? b[j]-'0' : 0 ;
            
            int total = val1 + val2 + carry ;
            ans = to_string(total % 2) + ans ;
			/*
			if total = 3 means ans will be 1 since 1 + 1 + 1 = 1 with carry 1.
			if total = 2 then ans will be 0 since 1 + 1 = 0 with carry 1.
			if total = 1 means ans will be 1 since 0 + 1 = 1 with carry 0.
			*/
            carry = total/2 ;
            i--;
            j--;
        }
        
        if(carry)
        {
            ans = '1' + ans ;
        }
        
        return ans ;
        
    }
};