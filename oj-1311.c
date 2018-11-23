#include<stdio.h>
int main()
{
    double v1,v2,v3,a1,a2,s1,s2,t1,t2,t;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lf%lf%lf%lf%lf",&v1,&v2,&v3,&a1,&a2);
        t1 = (v1/a1);
        t2 = (v2/a2);
        t = t1;
        if(t2>t1) t = t2;


        s1 = (v1*v1)/(2*a1);
        s2 = (v2*v2)/(2*a2);
        printf("Case %d: %lf %lf\n",i,(s1+s2),(t*v3));
    }
    return 0;
}
