#include<bits/stdc++.h>
using namespace std;

int fact(int n, int num)
{
    if (n==0) return num;
    num *= n;
    fact(n-1, num);
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n, 1);
    return 0;
}