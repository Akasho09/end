#include <bits/stdc++.h>
using namespace std;

bool canMakeTarget(int n, int k, int target, vector<int>& coins) {
    vector<vector<bool>> dp(k + 1, vector<bool>(target + 1, false));
    dp[0][0] = true; // base case

    for (int i = 1; i <= k; i++) { // number of coins used
        for (int sum = 0; sum <= target; sum++) {
            for (int coin : coins) {
                if (sum >= coin && dp[i - 1][sum - coin]) {
                    dp[i][sum] = true;
                }
            }
        }
    }

    return dp[k][target];
}

int main() {
    int n = 3, k = 3, target = 6;
    vector<int> coins = {1, 2, 3};

    if (canMakeTarget(n, k, target, coins))
        cout << "Possible to make " << target << " with exactly " << k << " coins.\n";
    else
        cout << "Not possible.\n";

    return 0;
}
