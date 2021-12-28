#include<iostream>
using namespace std;

/*
https://codeforces.com/problemset/problem/231/A
*/

int main()
{
int n,p,v,t,s=0;
cin>>n;

for(int i=0;i<n;i++)
{
    cin>>p>>v>>t;
    if((p+v==2)||(p+t==2)||(v+t==2))
    {
        s++;
    }
}
cout<<s;
return 0;
}