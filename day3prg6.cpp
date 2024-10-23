/* Given an array of integers arr[] of size N and an integer d, the task is to rotate the array
elements to the left by d positions. */

#include <iostream>
using namespace std;

int main() {

    int n, d;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the number of positions to rotate: ";
    cin >> d;
    int arr[n], temp[d];
    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Step 1: Store the first 'd' elements in a temporary array
    for(int i = 0; i < d; i++) temp[i] = arr[i];
    // Step 2: Shift the remaining elements to the left
    for(int i = 0; i < n - d; i++) arr[i] = arr[i + d];
    // Step 3: Move the elements from the temporary array to the end
    for(int i = 0; i < d; i++) arr[n - d + i] = temp[i];

    cout << "Rotated array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
