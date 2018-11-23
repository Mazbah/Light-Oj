#include<stdio.h>
#include<math.h>
int binary(long int bin)
{
    int r,sum=0,i=1;
    while(bin!=0){
            r = bin%10;
            sum += (r*i);
            bin = bin/10;
            i = i*2;
    }
    return sum;
}
int main()
{
    int a[4],i,j,T;
    long int b[4];
    scanf("%d",&T);
    for(j=1;j<=T;j++){
        scanf("%d.%d.%d.%d",&a[0],&a[1],&a[2],&a[3]);
        scanf("%ld.%ld.%ld.%ld",&b[0],&b[1],&b[2],&b[3]);

        b[0] = binary(b[0]);
        b[1] = binary(b[1]);
        b[2] = binary(b[2]);
        b[3] = binary(b[3]);

    if(a[0]==b[0] && a[1]==b[1] && a[2]==b[2] && a[3] ==b[3])
        printf("Case %d: Yes\n",j);
    else
        printf("Case %d: No\n",j);
    }
    return 0;
}
