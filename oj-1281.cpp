#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
typedef  pair<pii,int> ppi;

const int MAX = 100001;
const int INF = 0x3f3f3f3f;

vector<ppi> g[MAX];
int d[MAX][11];

int dijkstra(int st,int en,int lim){
    int u,v,w,e,x,y,sz,i,ret = INF;
    priority_queue<ppi, vector<ppi>,greater<ppi> > q;
    memset(d,0x3f,sizeof(d));
    d[st][ 0] = 0;
    q.push(ppi(pii(d[st][0],0),st));
    while(!q.empty()){
        u = q.top().second;
        w = q.top().first.first;
        x = q.top().first.second;
        q.pop();
        if(d[u][x] < w) continue;
        sz = g[u].size();
        for(i=0;i<sz;i++){
            v = g[u][i].second;
            e = g[u][i].first.first;
            y = g[u][i].first.second;
            if(x+y > lim) continue;
            if(d[v][x+y] > d[u][x]+e ){
                d[v][x+y] = d[u][x]+e;
                q.push(ppi(pii(d[v][x+y],x+y),v));
            }
        }
    }
    for(i=0;i<=lim;i++) ret = min(ret,d[en][i]);
    return ret;
}

int main()
{
    int test,cs,i,u,v,w,ret,n,e,prop,lim;
    cin>>test;
    for(cs=1;cs<=test;cs++){
        cin>>n>>e>>prop>>lim;
        for(i=0;i<n;i++) g[i].clear();
        for(i=0;i<e;i++){
            cin>>u>>v>>w;
            g[u].push_back(ppi(pii(w,0),v));
        }
        for(i=0;i<prop;i++){
            cin>>u>>v>>w;
            g[u].push_back(ppi(pii(w,1),v));
        }
        ret = dijkstra(0,n-1,lim);
        if(ret == INF) printf("Case %d: Impossible\n",cs);
        else
            printf("Case %d: %d\n",cs,ret);
    }
    return 0;
}
