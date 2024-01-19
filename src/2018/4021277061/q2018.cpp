#include <iostream>
using namespace std;

int countWays(int n) {
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n;
    cin >> n;

    if (n < 1 || n > 25) {
        return 1;
    }

    int ways = countWays(n);
    cout << ways << endl;

    return 0;
}
