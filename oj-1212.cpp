#include<stdio.h>
#include<deque>
#include<string.h>
using namespace std;
int main()
{
    int t,n,m,x,k,i;
    char str[20];
    scanf("%d",&t);
    for(k=1;k<=t;k++){
        printf("Case %d:\n",k);
        scanf("%d%d",&n,&m);
        deque<int>q;
        for(i=0;i<m;i++){
            scanf("%s",str);
            if(!strcmp(str,"pushLeft"))
            {
                scanf("%d",&x);
                if(q.size()!=n)
                {
                    q.push_front(x);
                    printf("Pushed in left: %d\n",x);
                }
                else
                    printf("The queue is full\n");
            }
            else if(!strcmp(str,"pushRight"))
            {
                scanf("%d",&x);
                if(q.size()!=n)
                {
                    q.push_back(x);
                    printf("Pushed in right: %d\n",x);
                }
                else
                    printf("The queue is full\n");
            }
            else if(!strcmp(str,"popLeft"))
            {
                if(!q.empty())
                {
                    printf("Popped from left: %d\n",q.front());
                    q.pop_front();
                }
                else
                    printf("The queue is empty\n");
            }
            else if(!strcmp(str,"popRight"))
            {
                if(!q.empty())
                {
                    printf("Popped from right: %d\n",q.back());
                    q.pop_back();
                }
                else
                    printf("The queue is empty\n");
            }
        }
    }
    return 0;
}
