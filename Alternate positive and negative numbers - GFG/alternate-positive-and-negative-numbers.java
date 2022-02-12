// { Driver Code Starts
//Initial Template for Java



import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String[] inputLine;
            int n = Integer.parseInt(br.readLine().trim());
            int[] arr = new int[n];
            inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            new Solution().rearrange(arr, n);
            for (int i = 0; i < n; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }
    }
}
// } Driver Code Ends


//User function Template for Java




class Solution 
{
    void rearrange(int arr[], int n) 
    {
        // code here
        ArrayList<Integer> tempPos=new ArrayList<Integer>();
        ArrayList<Integer> tempNeg=new ArrayList<Integer>();
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0)
            {
                tempPos.add(arr[i]);
            }
            else
            {
                tempNeg.add(arr[i]);
            }
        }
        int x=0,y=0,z=0;
        while(x<n && y<tempPos.size() && z<tempNeg.size())
        {
            if(x%2==0)
            {
                arr[x]=tempPos.get(y);
                x++;
                y++;
            }
            else
            {
                arr[x]=tempNeg.get(z);
                x++;
                z++;
            }
        }
        while(y<tempPos.size())
        {
            arr[x]=tempPos.get(y);
            x++;
            y++;
        }
        while(z<tempNeg.size())
        {
            arr[x]=tempNeg.get(z);
            x++;
            z++;
        }
    }
}