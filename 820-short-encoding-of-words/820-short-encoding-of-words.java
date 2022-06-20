class Solution 
{
    public int minimumLengthEncoding(String[] words) 
    {
        Set<String> wordSet=new HashSet<>(Arrays.asList(words));
        for(String s:words)
        {
            for(int i=1;i<s.length();i++)
            {
                wordSet.remove(s.substring(i));
            } 
        }
        int length=0;
        for(String s:wordSet)
        {
            length+=s.length()+1;
        }
        return length;
    }
}

/*
Method 1

Arrays.sort(words,(a,b)->b.length()-a.length());
        StringBuilder encoding=new StringBuilder();
        for(String s:words)
        {
            if(encoding.indexOf(s+"#")==-1)
            {
                encoding.append(s+"#");
            }
        }
        return encoding.length();
*/
