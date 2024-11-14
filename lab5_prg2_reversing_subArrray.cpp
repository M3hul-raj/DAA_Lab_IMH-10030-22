/* Given an array of integers, find if reversing a sub-array makes the array sorted */

#include <iostream>
using namespace std;

bool canBeSortedByReversing(int arr[], int n) {
    int start = -1, end = -1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }
    if (start == -1) {
        return true;
    }

    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }

    int left = start, right = end;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 5, 4, 2, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (canBeSortedByReversing(arr, n)) {
        cout << "Yes, the array can be sorted by reversing a sub-array." << endl;
    } else {
        cout << "No, the array cannot be sorted by reversing any sub-array." << endl;
    }
    return 0;
}
