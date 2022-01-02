#include<bits/stdc++.h>
using namespace std;

/*
https://codeforces.com/problemset/status?my=on
*/

int main()
{
    string str1;
    string str2;
    string str3;

    cin>>str1>>str2>>str3;

    string newstring=str1.append(str2);
    

    sort(newstring.begin(),newstring.end());
    sort(str3.begin(),str3.end());

    if(newstring==str3)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


    

    return 0;
}