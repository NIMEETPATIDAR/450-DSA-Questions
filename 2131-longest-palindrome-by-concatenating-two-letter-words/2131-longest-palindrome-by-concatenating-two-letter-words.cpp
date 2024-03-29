class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int n = words.size();
        vector<vector<int>> counter(26,vector<int>(26,0));
        int ans=0;
        // for different letters in the word
        for(string s:words){
            int a = s[0]-'a'; // first letter
            int b = s[1]-'a'; // second letter
            // if the reverse of the word exists i.e like for "lc" if "cl" exists
            if(counter[b][a]) {
                ans+=4; // count increase by 2+2 = 4
                counter[b][a]--; // remove the occurance of the word from counter
            }
            else counter[a][b]++; // if original doesn't exits in counter array then increase in counter
        }
        // for same letters in the word
        for(int i=0;i<26;i++){
            if(counter[i][i]){ // if both the letters are same
                ans+=2; // increase by 2 i.e like for "gg" 
                break;
            }
        }
        return ans;
    }
};
