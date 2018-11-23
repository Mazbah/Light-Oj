#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
       printf("Case %d:\n",t);
        string cd,str;
        strcpy(str[0],"http://www.lightoj.com/");
        int n,p;
        n = 0;
        p=0;
        while(1){
            scanf("%s",cd);
            getchar();
            if(!strcmp(cd,"QUIT")){
                break;
            }
            else if(!strcmp(cd,"VISIT")){
                n++;
                p = n;
                scanf("%s",str[n]);
                getchar();
                printf("%s\n",str[n]);
            }
            else if(!strcmp(cd,"BACK")){
                n--;
                if(n<0){
                    printf("Ignored\n");
                    n++;
                }
                else{
                    printf("%s\n",str[n]);
                }
            }
            else if(!strcmp(cd,"FORWARD")){
                n++;
                if(n>p){
                   printf("Ignored\n");
                    n--;
                }
               else
                    printf("%s\n",str[n]);
        }}
    }
    return 0;
}
