#include<bits/stdc++.h>
using namespace std;

/*
https://codeforces.com/problemset/problem/791/A
*/
int main()
{
    int age1,age2;
    int year=0;

    cin>>age1>>age2;

    while(1)
    {
        year++;
        age1=age1*3;
        age2=age2*2;
        if(age1>age2)
        break;

    }
    cout<<year;
     return 0;
}