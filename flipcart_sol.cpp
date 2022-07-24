#include<bits/stdc++.h>
using namespace std;
/*
@swasthiiiiii
*/

int main()
{
    int size;
    cout<<"enter the size:";
    cin>>size;
    int input_arr[size];
    int output_arr[size];
    cout<<"enter the array in non decreasing order:\n";
    for(int counter=0;counter<size;counter++)
    {
        cin>>input_arr[counter];
    }
    cout<<"original array\n";
    for(int counter=0;counter<size;counter++)
    {
        cout<<input_arr[counter]<<"\t";
    }

    
   //finding squres of elements
    for(int counter=0;counter<size;counter++)
    {
    output_arr[counter]=input_arr[counter]*input_arr[counter];
    }
    cout<<"\n final out put according to question:\n";
    for(int counter=0;counter<size;counter++)
    {
        cout<<output_arr[counter]<<"\t";
    }




    /*if you want the answer in reverse of array or array in 
    decreasing order follow this line
    i used stl function sort u can hardcode also
    */
    int n = sizeof(output_arr)/sizeof(output_arr[0]);
    sort(output_arr,output_arr+n,greater<int>());
    cout<<"\nout put in decreasing order:\n";
    for(int counter=0;counter<size;counter++)
    {
        cout<<output_arr[counter]<<"\t";
    }


    return 0;
}