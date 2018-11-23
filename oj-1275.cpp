#include<bits/stdc++.h>
using namespace std;

double eq(double x,double c,double n)
{
    if(x*(c-x*n)<0) return 0;
    return (x*(c-x*n));
}

int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        int n,c;
        double l=0,r=200000000;
        cin>>n>>c;
        printf("Case %d: ",k);

        if(n==0)cout<<"0\n";
        else if(c<n) cout<<"0\n";
        else if(c>n){
            for(int i=0;i<2000;i++){
                double l1 = (2*l+r)/3.0;
                double l2 = (l+2*r)/3.0;

                if(eq(l1,c,n) >= eq(l2,c,n))
                    r = l2;
                else
                    l = l1;
            }
            double x = l;
            double a= floor(x);
            double b= ceil(x);

            if(eq(a,c,n) >= eq(b,c,n))
                cout<<(long long)(a)<<endl;
            else
                cout<<(long long)(b)<<endl;
        }
        else
            cout<<"0\n";
    }
    return 0;
}
