/* Given a set of non-negative integers and a value sum, the task is to check if there is a
subset of the given set whose sum is equal to the given sum. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum;
    cout << "Value of sum: ";
    cin >> sum;

    // Array to store if a sum is possible (using dynamic programming)
    bool dp[sum + 1] = {false};
    dp[0] = true; // sum 0 is always possible (with an empty subset)

    // Dynamic programming to check if a subset with the given sum exists
    for (int i = 0; i < n; i++) {
        for (int j = sum; j >= arr[i]; j--) {
            if (dp[j - arr[i]]) {
                dp[j] = true; // If a subset with sum (j - arr[i]) exists, then sum j is also possible
            }
        }
    }

    if (dp[sum]) {
        cout << "Found a subset with the given sum." << endl;
    } else {
        cout << "No subset with the given sum." << endl;
    }

    return 0;
}
