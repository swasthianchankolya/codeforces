#include<bits/stdc++.h>
using namespace std;


/*
https://codeforces.com/problemset/problem/1606/A
*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;

    int len=s.length();
  
    if(s[0]==s[s.length()-1])
    {
        cout<<s<<"\n";
    }
    else
    {
        s[s.length()-1]=s[0];
        cout<<s<<"\n";
    }
    }
    return 0;
}