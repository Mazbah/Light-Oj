#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> vt[5000],cost[5000];
ll n,d1[5000],d2[5000],sz;    /// d2[] = second shortest,, d1[] = shortest

struct node{
    ll u,w;
    node(ll a,ll b){
        u = a, w=b;
    }
    bool operator < (const node &p) const{
        return p.w<w;
    }
};

void dijkstra(int st)
{
    priority_queue<node> q;
    q.push(node(st,0));
    for(int i=1;i<=n;i++){
        d1[i] = 3000000;
        d2[i] = 3000000;
    }
    d1[st] = 0;
    while(!q.empty()){
        node top = q.top();
        q.pop();
        int u = top.u;
        sz = vt[u].size();
        for(int i=0;i<sz;i++){
            int v = vt[u][i];
            int uu = cost[u][i];   /// mind it
            if(d1[u]+uu < d1[v]){
                ll temp = d1[v];
                d1[v] = d1[u]+uu;
                d2[v] = min(temp,min(d2[v],min(d2[u]+uu, d1[u]+3*uu)));
                q.push(node (v,d1[v]+d2[v]));
            }
            else if(d1[u]+uu < d2[v] && (d1[u]+uu)>d1[v]){
                d2[v] = d1[u]+uu;
            }
            else{
                d2[v] = min(d2[v],min(d2[u]+uu, d1[u]+3*uu));
            }
        }
    }
}

int main()
{
    int t,cs=1,st,e,u,v,w,nn,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>e;
        for(int i=1;i<=e;i++){
            cin>>u>>v>>w;
            vt[u].push_back(v);
            vt[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        ll back = 100000009;     /// It's for a special case,given below
        for(int i = 0;i<vt[1].size();i++){
            back = min(back, 2*cost[1][i]);
        }
        dijkstra(1);
        back = d1[n] + back;
        cout<<"Case "<<cs++<<": "<<min(back,d2[n])<<endl;
        for(int i=0;i<=n;i++){
            vt[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}
