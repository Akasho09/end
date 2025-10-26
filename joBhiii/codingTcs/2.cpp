// Q2) Given an array of integers and a sum, the task is to count all subsets of given array with sum equal to given sum.

// Input :  
// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. 
//Each test case contains an integer n denoting the size of the array. The next line contains n space separated integers forming the array. The last line contains the sum. 

// Output : 
// Count all the subsets of given array with sum equal to given sum. 
// NOTE: Since result can be very large, print the value modulo 109+7.

// SUBSETS NOT SUBARRAYS

#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define MOD 1000000007

int countSubsetsWithSum(vector<int>& arr, int sum){
    int n = arr.size();
    vector<int> dp(sum + 1, 0);
    dp[0] = 1; 

    for (int num : arr) {
        for (int j = sum; j >= num; j--) {
            dp[j] = (dp[j] + dp[j - num]) % MOD;
        }
    }

   return dp[sum];
}

class Solution {
public:
    #define MOD 1000000007
    int helper(vector<int>& arr, int target , int i , vector<vector<int>>&dp) {
        if(i == arr.size()) {
            return target == 0 ? 1 : 0;  
        }

        if(dp[i][target] != -1) return dp[i][target];

        int nTake = helper(arr, target, i + 1, dp) % MOD;

        int take = 0;
        if(target - arr[i] >= 0)
            take = helper(arr, target - arr[i], i + 1, dp) % MOD;

        return dp[i][target] = (take + nTake) % MOD;
    }

    int perfectSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        return helper(arr, target, 0, dp);
    }
};


int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        int sum;
        cin >> sum;

        // TABULATION 
        // vector<vector<int>>dp(n+1, vector<int>(sum+1, 0 ));
        // for(int i=0;i<n;i++) dp[i][0]=1;
        // for(int i=1;i<=arr.size();i++){
        //     for(int j = 0; j <= sum; j++) {

        //     }

        // }




        // vector<vector<int>>dp(n , vector<int>(sum , -1) );
        // cout << helper(arr , sum , 0  , dp) % MOD << "\n";
    }
    return 0;
}
