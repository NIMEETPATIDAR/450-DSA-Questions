class Solution {
public:
    string breakPalindrome(string palindrome) {
        int si=palindrome.size();
       string str="";
        if(si<=1) return str;
        for(int i=0;i<palindrome.size()/2;i++){
           if(palindrome[i]!='a'){
                palindrome[i]='a';
                return palindrome;
            }
        }
        palindrome[si-1]='b';
        return palindrome;
    }
    
};