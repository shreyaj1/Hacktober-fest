problem statement 
https://leetcode.com/problems/longest-increasing-subsequence/

video solution
https://www.youtube.com/watch?v=odrfUCS9sQk



// Using Dynamic Programming.........
//  Time Complexity : O(N^2)......
 // Space Complexity : O(N)........
    
    int lengthOfLIS(vector<int>& arr) {
        int n=arr.size();
        int lis[n];
        lis[0]=1;
         for(int i=1;i<n;i++)
         {
             lis[i]=1;
             for(int j=0;j<i;j++)
             {
                 if(arr[i]>arr[j] && lis[j]+1>lis[i])
                 {
                     lis[i]=lis[j]+1;
                 }
             }
         }
        return *max_element(lis,lis+n);
    }