#include<stdio.h>
#include<math.h>
int main()
{
    int r1,r2,h,p,i,n;
    double R1,R2,a,v;
    a = acos(-1);
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lf%lf%lf%lf",&r1,&r2,&h,&p);
        R1 = r1;
        R2 = r2+((r1-r2)*(p/h));
        v = ((a*h)*((R1*R1)+(R1*R2)+(R2*R2)))/3;
        printf("Case %d: %.9lf\n",i,v);
    }
    return 0;
}
