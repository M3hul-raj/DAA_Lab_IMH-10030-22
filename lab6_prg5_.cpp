/* Given 2 sorted arrays arr1[] and arr2[], each of size n, the task is to find the median of
the array obtained after merging arr1[] and arr2[] */

#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    int merged[2 * n];
    int i = 0, j = 0, k = 0;

    while (i < n && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            cout<<merged[k]<<endl;
            k++;
            i++;
        } 
        else {
            merged[k] = arr2[j];
            cout<<merged[k]<<endl;
            k++;
            j++;
        }
    }

    while (i < n) {
        merged[k] = arr1[i];
        cout<<merged[k]<<endl;
        k++;
        i++;
    }

    while (j < n) {
        merged[k] = arr2[j];
        cout<<merged[k]<<endl;
        k++;
        j++;
    }

    double median;
    int totalSize = 2 * n;
    if (totalSize % 2 == 0) {
        median = (merged[totalSize / 2 - 1] + merged[totalSize / 2]) / 2.0;
    } else {
        median = merged[totalSize / 2];
    }
    cout << "Median: " << median << endl;
    return 0;
}

