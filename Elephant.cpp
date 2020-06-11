//
// Created by parth on 11/6/20.
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, INT_MAX);
    vector<int> steps = {1, 2, 3, 4, 5};

    for (int i = 0; i < dp.size(); i += 1) {
        if (i == 0) {
            dp[i] = 0;
        } else {
            for (auto s : steps) {
                if (s <= i) {
                    dp[i] = min(dp[i - s] + 1, dp[i]);
                }
            }
        }
    }
    cout << dp[n];
    return 0;
}

