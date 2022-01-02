#include<bits/stdc++.h>
using namespace std;

/*
https://codeforces.com/problemset/problem/41/A

*/
int main()
{

string word1;
string word2;
string newword;


cin>>word1;
cin>>word2;

reverse(word1.begin(),word1.end());


if(word1==word2)
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}



return 0;
}