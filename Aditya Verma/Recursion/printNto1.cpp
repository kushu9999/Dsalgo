#include<bits/stdc++.h>
using namespace std;

void reversePrintArray(vector<int> &arr, int n)
{
    if (n == 0) return;
    cout<<arr[n-1]<<" ";
    n -= 1;
    reversePrintArray(arr,n);
}

int main()
{
    vector<int> arr{1,2,3,4,5,6};
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
    cout<<endl;
    reversePrintArray(arr, arr.size());
    return 0;
}