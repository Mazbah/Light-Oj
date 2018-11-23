#include<stdio.h>
int main()
{
    int a1,a2,b1,b2,c1,c2,d1,d2,T,i,x,y;
    double m,z;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);
        d1 = c1-(b1-a1);
        if(a2==b2){
            d2 =c2;
        }
        else{
            d2 = c2-(b2-a2);
        }
        m = ((a1*b2)+(b1*c2)+(c1*d2)+(d1*a2))-((a2*b1)+(b2*c1)+(c2*d1)+(d2*a1));
        if(m<0)
            m *= -1;
        z = 0.5*m;
        printf("Case %d: %d %d %.0lf\n",i,d1,d2,z);
    }
    return 0;
}
