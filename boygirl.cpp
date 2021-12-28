#include<bits/stdc++.h>
using namespace std;

/*
https://codeforces.com/problemset/problem/236/A
*/

int WinMain()
{
string str;
int count=0;
cin>>str;
int x;
x=str.length();

for(int i='a';i<='z';i++)
{
    for(int j=0;j<x;j++)
    {
        if(i==str[j])
        {
            count=count+1;
            break;
        }
    }
}
if(count%2==0)
{
    cout<<"CHAT WITH HER!";
}
else
{
    cout<<"IGNORE HIM!";
}
return 0;
}