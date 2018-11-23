#include<stdio.h>
#include<math.h>
int main ()
{
    int n,T,i,y,a;
    double pi,R,r,b,c,x;
    pi = acos(-1);
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%lf%d",&R,&n);
        x = (pi/n);
        c = sin(x);
        b = (c*R)/(c+1);
        a = (int)b;
        y =(a*1)/b;
        if(y!=1)
            printf("Case %d: %.10lf\n",i,b);
        else
            printf("Case %d: %.0lf\n",i,b);
    }
    return 0;
}



