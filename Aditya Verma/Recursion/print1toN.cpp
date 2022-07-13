#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr, int i)
{
    if (i == arr.size()) return;
    cout<<arr[i]<<" ";
    i += 1;
    printArray(arr,i);
}

int main()
{
    vector<int> arr{1,2,3,4,5,6};
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
    cout<<endl;
    printArray(arr, 0);
    return 0;
}