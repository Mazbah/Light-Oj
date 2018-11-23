#include<stdio.h>
#include<math.h>
#define PI 2*acos(0.0)
int main()
{
    int i,T;
    double r,x,y,z;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%lf",&r);
        x = PI*r*r;
        y = 2*r;
        z = y*y;
        printf("Case %d: %.2lf\n",i,z-x);
    }
    return 0;
}
