#include<stdio.h>
int main()
{
    int T,i,x1,y1,x2,y2,x,y,j,M,k;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d",&M);
        printf("Case %d:\n",i);
        for(j=0;j<M;j++){
            scanf("%d%d",&x,&y);
            if(x>x1 && x<x2 && y<y2 && y>y1)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
