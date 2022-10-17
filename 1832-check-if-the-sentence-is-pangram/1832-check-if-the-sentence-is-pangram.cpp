class Solution 
{
public:
    bool checkIfPangram(string sentence) 
    {
        bool ans=false;
        unordered_map<char,int> mpp;
        for(int i=0;i<sentence.size();i++)
        {
            if(mpp.find(sentence[i])!=mpp.end()) ans=false;
            else mpp[sentence[i]]++;
        }
        cout<<sentence.size()<<endl;
        cout<<mpp.size();
        if(mpp.size()>=26) ans=true;
        return ans;
    }
};