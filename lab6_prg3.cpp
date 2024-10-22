/* Given two strings, S1 and S2, the task is to find the length of the Longest Common
Subsequence. */

#include <iostream>
#include <string>
using namespace std;

int LCS(string S1, string S2) {
    int n = S1.length();
    int m = S2.length();
    
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            // If either string is empty, the LCS is 0
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            }
            // If the characters match, add 1 to the LCS of the previous characters
            else if (S1[i - 1] == S2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            // If they don't match, take the maximum of the previous LCS results
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][m];
}

int main() {
    string S1, S2;
    cout << "Enter the first string: ";
    cin >> S1;
    cout << "Enter the second string: ";
    cin >> S2;
    
    int lcsLength = LCS(S1, S2);
    cout << "The length of the Longest Common Subsequence is: " << lcsLength << endl;

    return 0;
}
