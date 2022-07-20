#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int num, int ans)
{
    if(num<=0) return ans;
    ans += num % 10;
    num /= 10;
    return sumOfDigits(num,ans);
}
int main()
{
    int num = 7483;
    int sum = 0;
    cout<<sumOfDigits(num,sum);
    return 0;
}