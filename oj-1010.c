#include<stdio.h>
int main()
{
    int i,m,n,T,x,y;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d%d",&m,&n);
        x=m*n;
        if((m==1)||(n==1)) printf("Case %d: %d\n",i,x);
        else if ((m==2)||(n==2)){
            if(m==2)
                y = n;
            else y = m;
            if(y%4==1)
                printf("Case %d: %d\n",i,y+1);
            else if(y%4==2)
                printf("Case %d: %d\n",i,y+2);
            else if(y%4==3)
                printf("Case %d: %d\n",i,y+1);
            else
                printf("Case %d: %d\n",i,y);
        }

        else if(x%2 == 0){
            printf("Case %d: %d\n",i,x/2);
        }
        else
            printf("Case %d: %d\n",i,(x/2)+1);
    }
    return 0;
}
