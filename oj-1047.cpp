
#include<bits/stdc++.h>
#define min3(a, b, c) (min(a, b) < min(b, c) ? min(a, b) : min(b, c))

using namespace std;
int main()
{
    int t,i,j,a[100][100],n;
    cin>>t;
    for(int k=1;k<=t;k++){
        cin>>n;

        for(i=0;i<n;i++){
                cin>>a[i][0]>>a[i][1]>>a[i][2];
        }

        for(j=1;j<n;j++){
            a[j][0] += min(a[j-1][1],a[j-1][2]);
            a[j][1] += min(a[j-1][0],a[j-1][2]);
            a[j][2] += min(a[j-1][1],a[j-1][0]);
        }

        cout<<"Case "<<k<<": "<< min3(a[n - 1][0], a[n - 1][1], a[n - 1][2]) <<endl;

    }
    return 0;
}
