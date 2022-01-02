#include<bits/stdc++.h>
using namespace std;

/*
https://codeforces.com/problemset/problem/1030/A
*/
int main()
{
    int n;
    int flag=0;

    cin>>n;
    int elements[n];


    for(int i=0;i<n;i++)
    {
        cin>>elements[i];
        if(elements[i]==1)
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
    {
        cout<<"hard";
    }
    else
    {
        cout<<"easy";
    }
    return 0;
}