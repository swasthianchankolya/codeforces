#include<bits/stdc++.h>
using namespace std;

/*
https://codeforces.com/problemset/problem/1352/A
*/

int main()
{
    int t;
    cin>>t;
    int count=0;

    while(t--)
    {
        int n;
        cin>>n;
        int arr[5];
        int total=0,m=1;
        for(int i=0;i<5;i++)
        {
            //this will take last element
            arr[i]=n%10;
            //here we removed last element
            //numbers are stored reverse here
            n=n/10;
            if(arr[i]!=0)
            {
                total++;
            }
        }
        cout<<total<<"\n";
        for(int i=0;i<5;i++)
        {
            if(arr[i]!=0)
            {
            /*
            by fefaul mis 1 and will multiply
            the first element and it will increased by 10 evrytime
            */
                cout<<arr[i]*m<<" ";
            }
            m=m*10;
        }
        cout<<"\n";
    }
    
    return 0;
}