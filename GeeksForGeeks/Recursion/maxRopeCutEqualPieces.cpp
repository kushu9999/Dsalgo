#include<bits/stdc++.h>
using namespace std;

int maxRopeCutEqualPieces(int n, int a, int b, int c)
{
    if (n < 0) return -1;
    if (n == 0) return 0;

    int res = max({maxRopeCutEqualPieces(n-a,a,b,c),maxRopeCutEqualPieces(n-b,a,b,c),maxRopeCutEqualPieces(n-c,a,b,c)});
    if (res == -1) return -1;
    return res+1;
}
int main()
{
    int n = 10, a = 2, b = 9, c = 12;
    cout<<maxRopeCutEqualPieces(n,a,b,c);
    return 0;
}