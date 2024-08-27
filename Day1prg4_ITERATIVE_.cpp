#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,n;
    cout<<"Enter value of the base(x) : ";
    cin>>x;
    cout<<"Enter value of exponent(n) : ";
    cin>>n;

    int compute = x;
    for(int i=1; i<n; i++){
        compute = x*compute;
    } 
    cout <<"Value of "<< x << " to the power of " << n << " is : " << compute << endl; 
}