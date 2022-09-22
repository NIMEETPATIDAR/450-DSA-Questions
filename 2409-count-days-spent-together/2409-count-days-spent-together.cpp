class Solution 
{
public:
    
    int fcs(string s)
    {
        vector<int> mm{31,28,31,30,31,30,31,31,30,31,30,31};
        int res=0;
        int mnt=stoi(s.substr(0,2))-1;
        int days=stoi(s.substr(3,2));
        for(int i=0;i<mnt;i++)
        {
            res=res+mm[i];
        }
        res=res+days;
        return res;
    }
    
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) 
    {
        int count=0;
        int a1=fcs(arriveAlice);
        int a2=fcs(leaveAlice);
        int b1=fcs(arriveBob);
        int b2=fcs(leaveBob);
        count=min(a2,b2)-max(a1,b1)+1;
        if(count<0)
        {
            count=0;
        }
        return count;
    }
};