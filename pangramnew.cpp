#include<bits/stdc++.h>
using namespace std;

/*
https://codeforces.com/problemset/problem/520/A
*/
 
int main()
{
     int number;
     cin>>number;
     string element;
     int count=0;
 
    cin>>element;

    //stl function to convert whole string to lower case
    transform(element.begin(),element.end(),element.begin(), ::tolower);

    string newelement=element;
 
    for(int i='a';i<='z';i++)
    {
        for(int j=0;j<number;j++)
        {
            if(i==newelement[j])
            {
            count=count+1;
            break;
            }
           
        }
    }
    if(count==26)
    {
        cout<<"YES";
        
       
    }
    else
    {
        cout<<"NO";    
    }
 
    
    return 0;
}
