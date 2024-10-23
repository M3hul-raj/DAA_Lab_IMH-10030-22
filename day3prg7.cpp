/* Given a list n numbers, find the element which appears maximum number of times. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the list: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the list:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxCount = 0;
    int maxElement = arr[0];
    for(int i = 0; i < n; i++) {
        int count = 0;
        // Count how many times arr[i] appears in the list
        for(int j = 0; j < n; j++) {
            if(arr[j] == arr[i]) count++;
        }
        if(count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    cout << "Element that appears the most : " << maxElement << endl;
    return 0;
}
