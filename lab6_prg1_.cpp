/* 1. Compute the power of a number using divide and conquer. */

#include <bits/stdc++.h>
using namespace std;

int POW(int a, int b){
    if(b==1) return a;
    int mid = b/2;
    int y = POW(a,mid);
    int x = y*y;
    if(b%2==0) return x;
    else return x*a;
}

int main()
{
    int a,b;
    cout<<"Enter the base(a) : ";
    cin>>a;
    cout<<"Enter the exponent(b) : ";
    cin>>b;
    int power = POW(a,b);
    cout<<"Power of the number is : "<<power;
    return 0;
}