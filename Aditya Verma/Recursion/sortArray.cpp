#include<bits/stdc++.h>
using namespace std;

int main()
{
    // cout<<"Hello World";
    vector<int> arr{8,5,0,10,0,20};
    int j=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    for(int i=j;i<arr.size();i++)
    {
        arr[i] = 0;
    }

    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
    return 0;
}