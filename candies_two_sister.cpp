#include<bits/stdc++.h>
using namespace std;

/*
by @swasthiiiiii


https://codeforces.com/problemset/problem/1335/A
*/

int main()
{
    int t;
    int number;
    cin>>t;

    while(t--)
    {
        cin>>number;
        number=number-1;
        number=number/2;
        cout<<number<<"\n";
    }
    return 0;
}