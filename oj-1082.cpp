#include<bits/stdc++.h>
#define mx 100005
using namespace std;
int arr[mx];
int tree[mx*3];

void init(int node,int b,int e)
{
    if(b==e){
        tree[node] = arr[b];
        return;
    }
    int left = node*2;
    int right = node*2 + 1;
    int mid = (b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node] = min(tree[left],tree[right]);
}

int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b)
        return mx;
    if(b>=i&&e<=j)
        return tree[node];
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(Left,b,mid,i,j);
    int p2=query(Right,mid+1,e,i,j);
    return min(p1,p2);
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,q;
        scanf("%d%d",&n,&q);
        for(int j=1;j<=n;j++)
            scanf("%d",&arr[j]);

        init(1,1,n);
        printf("Case %d:\n",i);
        for(int m=1;m<=q;m++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            printf("%d\n",query(1,1,n,a,b));
        }
    }
    return 0;
}
