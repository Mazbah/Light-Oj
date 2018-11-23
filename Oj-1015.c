#include<stdio.h>
int main()
{
    int N,T,i,W,j,sum;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        sum = 0;
        for(j=0;j<N;j++){
            scanf("\n%d",&W);
            if(W>0)
                sum += W;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}

