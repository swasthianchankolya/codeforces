#include<bits/stdc++.h>
using namespace std;

/*
https://codeforces.com/problemset/problem/486/A
*/
int main()
{

    
    long long number;
    cin>>number;
    long long answer=0;
    if(number%2==0)
    {
        answer=number/2;
    }
    else
    {
        answer=-(number/2 +1);
    }
    cout<<answer;
    return 0;
}