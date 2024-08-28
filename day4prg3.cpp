#include <bits/stdc++.h>
using namespace std;

int getInvCount(vector<int> &arr) {
    int n = arr.size();
    int inv_count = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j])
                inv_count++;
        }
    }
    return inv_count;
}

int main() {
    vector<int> arr;
    int n;
    cout<< "Enter the size of the array : ";
    cin >> n;
    cout<< "Enter the elements of the array : ";
    for(int i=0 ; i < n ; i++){
        int k;
        cin >> k;
        arr.push_back(k);
    }
    cout <<" Inversion Count is : " << getInvCount(arr) << endl;
    return 0;
}

