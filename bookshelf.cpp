#include<bits/stdc++.h>
using namespace std;

/*
by @swasthiiiiii


problem:
https://codeforces.com/problemset/problem/1433/B
*/

/*
approch :
0 0 0 1 0 0 1  0 0 0
instead of moving the 1s jus count the number of
0s between 1s.
for this we have to find the first 1 and last 1
*/
int main()
{
    int t;
    cin>>t;
    cout<<"\n";
    

while(t--)
{
    int flag=0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

/*
using this loop we can find out the first occurence of 1
if the element 0 then it will be changed as 2 untill we 
get 1 ,if we get 1 then the loop will terminate

and our array look like this 2 2 2 1 0 0 1  0 0 0
*/
   for(int i=0;i<n;i++)
   {
      if(arr[i]==0)
      {
          arr[i]=2;
      }
      else
      {
          break;
      }
   }

   /*
using this loop we can find out the last occurence of 1
if the element 0 then it will be changed as 2 untill we 
get 1 ,if we get 1 then the loop will terminate

and our array look like this 2 2 2 1 0 0 1  2 2 2
*/
    for(int i=n-1;i>0;i--)
   {
      if(arr[i]==1)
      {
         break;
      }
      else
      {
         arr[i]=2;
      }
   }

   /*
   here note that the 0s which are in between 1s will
   remain as it is
  and now we just have to count the 0s present in the array
   */

   for(int i=0;i<n;i++)
   {
       if(arr[i]==0)
       {
           flag++;
       }
   }
   cout<<"\n";
   cout<<flag;
   cout<<"\n";


}
    return 0;
}