#include<bits/stdc++.h>
using namespace std;
int coin[100],no[100],n,kj;
long long int dp[100][1003];
int mod = 100000007;

long long int call(int i,int amount)
{
    int j;
    if(i==n){
        if(amount==0) return 1;
        else return 0;
    }
    long long int &res = dp[i][amount];

    if(res != -1) return res;
    res = 0;
    for(j=0;j<=no[i];j++){
        if(amount-(coin[i]*j)>=0)
            res += call(i+1,amount-(coin[i]*j))%mod;
        else
            break;
    }
    res = res%mod;
    return res;
}

int main()
{
    int t,j,i,m,k;
    cin>>t;
    for(m=1;m<=t;m++){
        cin>>n>>k;
        memset(dp,-1,sizeof(dp));
        for(i=0;i<n;i++){
            cin>>coin[i];
        }
        for(i=0;i<n;i++){
            cin>>no[i];
        }
        cout<<"Case "<<m<<": "<<call(0,k)<<endl;
    }
    return 0;
}
