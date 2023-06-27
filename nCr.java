Given two integers n and r, find nCr. Since the answer may be very large, calculate the answer modulo 109+7.

Example 1:

Input: n = 3, r = 2
Output: 3
Explaination: 3C2 = 3. 

  #code--

// User function Template for C++

class Solution{
public:
    int nCr(int n, int r){
        // code here
        int mod=1e9+7;
        if(n<r) return 0;
        vector<vector<int>>dp(n+1,vector<int>(n+1));
        for(int i=0;i<n+1;i++){
            dp[i][0]=1;
            for(int j=1;j<=i;j++){
                dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%mod;
            }
        }
        return dp[n][r];
    }
};
