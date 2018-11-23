#include<bits/stdc++.h>
using namespace std;
int dp[10005];
int f1(int n)
{
    int j;

    if(dp[n]!= -1)
        return dp[n];
    else{
        for(j=6;j<=n;j++)
            dp[j] =(f1(j-1)+f1(j-2)+f1(j-3)+f1(j-4)+f1(j-5)+f1(j-6))%10000007;
        return dp[j];
    }
}
int main()
{

    int caseno = 0, cases;
    long long n,i,a[10005],j;
    scanf("%d", &cases);
    while( cases-- ) {
        for(i=0;i<10001;i++)
            dp[i] =-1;
        for(j=0;j<=5;j++)
            cin>>a[j];
        scanf("%lld",&n);
        printf("Case %d: %d\n", ++caseno, f1(n) %10000007);
    }
    return 0;
}
