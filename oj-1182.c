#include<stdio.h>
int main()
{
    int i,n,j,x,T,k;
    int b[100];
    while(scanf("%d",&T)!=EOF){
    for(k=1;k<=T;k++){
        scanf("%d",&n);
        i=0;
        while(n!=0){
            b[i++] = n%2;
            n = n/2;
            if(n==0)
                break;
        }
        x=0;
        for(j=i-1;j>=0;j--){
            if(b[j] == 1){
                x++;
            }
        }
        if(x%2==0)
            printf("Case %d: even\n",k);
        else
            printf("Case %d: odd\n",k);
    }}
    return 0;
}







