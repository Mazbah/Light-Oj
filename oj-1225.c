#include<stdio.h>
#include<string.h>
int main()
{
    char n[100],m[100];
    int T,i,j,k,x;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%s",n);
        x = strlen(n);
        k = 0;
        for(j=x-1;j>=0;j--){
            m[k]  = n[j];
            k++;
        }
        m[k] = '\0';
        if(strcmp(n,m)==0)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
    return 0;
}
