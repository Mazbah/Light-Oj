#include<stdio.h>
int main ()
{
    int T,i,m,n,x,a,b,z,d;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d%d",&m,&n);
        if(m>n)
            a = m-n;
        else
            a = n-m;
        z = a*4;
        int enter = 3+5+3;
        d = m*4;
        b = z+enter+d+5+3;
        printf("Case %d: %d\n",i,b);
    }
    return 0;
}

