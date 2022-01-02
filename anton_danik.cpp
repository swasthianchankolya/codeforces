#include<bits/stdc++.h>
using namespace std;

/* this solution is submitted by 
swasthik anchan
https://codeforces.com/problemset/problem/734/A
*/
int main()
{
    int number;
    string str;
    int anton=0;
    int danik=0;

    cin>>number;
    cin>>str;

    for(int i=0;i<number;i++)
    {
        if(str[i]=='A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }

    if(anton>danik)
    {
        cout<<"Anton";
    }
    else if(danik>anton)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
    return 0;
}