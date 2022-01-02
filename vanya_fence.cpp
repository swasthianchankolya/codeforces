#include<bits/stdc++.h>
using namespace std;

/*
https://codeforces.com/problemset/problem/677/A
*/
int main()
{
    int number;
    int size;
    int height[100];
    int bend=0;
    int notbend=0;
    cin>>number;
    cin>>size;

    for(int i=0;i<number;i++)
    {
        cin>>height[i];
        if(height[i]<=size)
        {
            notbend=notbend+1;
        }
        else
        {
            bend=bend+2;
        }
    }
    int newh=bend+notbend;
    cout<<newh;
    return 0;
}