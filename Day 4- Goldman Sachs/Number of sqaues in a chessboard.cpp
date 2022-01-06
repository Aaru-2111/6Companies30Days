// Problem : Count the number of square in a chessboard


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int ans=(n*(n+1)/2)*(2*n+1)/3;
    cout<<ans;

}
