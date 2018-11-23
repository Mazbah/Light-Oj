#include<bits/stdc++.h>
using namespace std;
long long int dp[500][500],a[500][500];
int main()
{
    int i,j,k,y,t,m,n;
    cin>>t;
    for(m=1;m<=t;m++){
        cin>>n;
        memset(dp,0,sizeof(dp));
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++){
            for(j=0;j<=i;j++)
                cin>>a[i][j];
        }
        for(i=n,k=n-1;i<2*n-1;i++,k--)
            for(j=0;j<k;j++)
            cin>>a[i][j];

        dp[0][0]= a[0][0];

        for(i=0;i<n-1;i++){
            for(j=0;j<=i;j++){
                dp[i+1][j] = max(dp[i+1][j],a[i+1][j]+dp[i][j]);
                dp[i+1][j+1] = max(dp[i+1][j+1],a[i+1][j+1]+dp[i][j]);
            }
        }
        for(i=n,k=n-1;i<2*n-1;i++,k--){
            for(j=0;j<k;j++){
                y = max(dp[i-1][j],dp[i-1][j+1]);
                dp[i][j] = a[i][j]+y;
            }
        }

        cout<<"Case "<<m<<": "<<dp[2*n-2][0]<<endl;
    }
    return 0;
}
