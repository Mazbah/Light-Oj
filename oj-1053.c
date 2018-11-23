#include<stdio.h>
int main()
{
    int a,b,c,i,T,x,y,z;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d%d%d",&a,&b,&c);
        x = a*a;y=b*b;z=c*c;
        if(x+y == z || y+z==x || z+x == y)
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);
    }
    return 0;
}
