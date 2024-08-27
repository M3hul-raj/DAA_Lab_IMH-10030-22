#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {2,23,41,25,36};
    int min1 = 0;
    for(int i=0; i<4;i++){
        for(int j=i+1; j<5 ;j++){
            if(arr[i] < arr[j]) min1 = arr[i]; 
        }
    }
    cout << "\nMin Element = " <<min1;
}