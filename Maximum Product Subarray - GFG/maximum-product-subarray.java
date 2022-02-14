// { Driver Code Starts
import java.io.*;
import java.util.*;

  public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine());
        while (tc-- > 0) {
            int n = Integer.parseInt(br.readLine());
            int[] arr = new int[n];
            String[] inputLine = br.readLine().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            System.out.println(new Solution().maxProduct(arr, n));
        }
    }
}
// } Driver Code Ends


class Solution {
    // Function to find maximum product subarray
    long maxProduct(int[] arr, int n) {
        // code here
        
        if(n==0)
        {
            return -1;
        }
        long minProd=arr[0];
        long maxProd=arr[0];
        long ans=arr[0];
        long choice1,choice2;
        for(int i=1;i<n;i++)
        {
            choice1=minProd*arr[i];
            choice2=maxProd*arr[i];
            minProd=Math.min(arr[i],Math.min(choice1,choice2));
            maxProd=Math.max(arr[i],Math.max(choice1,choice2));
            ans=Math.max(ans,maxProd);
        }
        return ans;
    }
}