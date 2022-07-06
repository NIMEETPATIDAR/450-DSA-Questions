class Solution 
{
public:
    int fibSolution(int n)
    {
        if(n==0) return 0;
        if(n==1) return 1;
        return fibSolution(n-1)+fibSolution(n-2);
        
    }
    int fib(int n) 
    {
        int result=fibSolution(n);
        return result;
    }
    
};