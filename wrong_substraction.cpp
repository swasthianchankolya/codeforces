#include<bits/stdc++.h>
using namespace std;

/*
https://codeforces.com/problemset/problem/977/A
*/
int main()
{
    int number;
    int n;

    cin>>number;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        if(number%10==0)
        {
            number=number/10;
        }
        else
        {
            number=number-1;
        }
    }
    cout<<number;
    return 0;
}