#include <iostream>
using namespace std;

class Solution {
  public:
    int helper(int n , vector<int>&dp){
        if(n==2) return 1;
        if(n==1) return 0;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=(n-1)*(helper(n-2,dp)+helper(n-1,dp));
    }
    int countDer(int n) {
        vector<int>dp(n+1,-1);
        dp[1]=1; dp[2]=1;
        return helper(n,dp);
    }
};

class Solution {
  public:
    int countDer(int n) {
        if(n==2) return 1;
        int a = 0 , b = 1 , ans = 0;
        for(int i = 3;i<=n ;i++){
            ans=(i-1)*(a+b);
            a=b;b=ans; 
        }
        return ans ;
    }
};
