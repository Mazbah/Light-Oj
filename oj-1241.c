#include<stdio.h>
int main()
{
    int i,n,t,j,x;
    int a[100];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        a[0]=2;
        for(j=1;j<=n;j++){
            scanf("%d",&a[j]);
        }
        x=0;
        for(j=0;j<n;j++){
            if(a[j+1]>a[j])
            {
                double u = (a[j+1]-a[j]);
                x += ceil(u/5.0);
            }
        }
        printf("Case %d: %d\n",i,x);
    }
    return 0;
}
