#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[] = {2,23,41,25,36};
    int srch = 41;
    for (int i=0; i<5;i++){
        if(arr[i] == srch){
            cout << "\nSearched Element = "<<srch;
            cout<< "\nElement found at index = "<<i;
        }
    }
}