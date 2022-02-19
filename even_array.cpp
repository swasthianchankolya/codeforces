#include<bits/stdc++.h>
using namespace std;

/*
 by @swasthiiiiii
 https://codeforces.com/problemset/problem/1367/B



 in simple words this problem states that there will one array of size n
 whos index starts from 0, and we have to insert the element to that array
 and if size is 5 then index will look like this [0 1 2 3 4] and the elements may be
 [4,3,2,6,5] here index of 4 is 0 and 0%2=0 and 4%2=0 so its good bcz both have same
 answer ,then element 3 is index is 1 and 1%2=1 and 3%2=1 so its good bcz its matching
but the in index we get 3%2=1 but the element of that index is 6 so 6%2=0 so they are not matching 
and nxt element is also not matching with index answer so we have to swap them


*/

int main()
{
    int t;
    int n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int arr[n];
        int even=0,odd=0,fair=0;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(arr[i]%2==0)
                {
                    fair++;
                }
                else
                {
                    even++;
                }
            }
             else
             {
                   if(arr[i]%2==1)
                    {
                    fair++;
                    }
                    else
                     {
                    odd++;
                     }
            }
        }
        if(even==odd)
        {
            cout<<even<<"\n";
        }
        else if(fair==n)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
}