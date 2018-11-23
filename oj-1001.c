#include<stdio.h>
int main()
{
    int i,n,b,t,a;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        if(n>10){
            a = n-10;
            b = 10;
            printf("%d %d\n",a,b);
        }
        else{
            a=0;
            printf("%d %d\n",a,n);
        }
    }
    return 0;
}
