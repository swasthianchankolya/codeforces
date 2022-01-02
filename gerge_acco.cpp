#include<bits/stdc++.h>
using namespace std;

/*
this solution is submitted by swasthiiiiiiii

https://codeforces.com/problemset/problem/467/A
*/
int main()
{

    int number;
    int ppl,size;
    int count=0;
    cin>>number;


    for(int i=0;i<number;i++)
    {
        cin>>ppl>>size;
        if(ppl<size && size-ppl>=2)
        {
            count=count+1;
        }
    }

    cout<<count;
}