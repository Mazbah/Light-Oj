#include<stdio.h>
int main()
{
    long long w,j,m;
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&w);
        if (w%2!= 0)
        {
            printf("Case %d: Impossible\n",i);
        }
        else{
            for(j=2;j<=w;j=j+2){
                m = w/j;
                if(m%2==1 &&(m*j)==w){
                    printf("Case %d: %lld %lld\n",i,m,j);
                    break;}
            }
        }
    }
    return 0;
}
