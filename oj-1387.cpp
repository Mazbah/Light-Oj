#include<iostream>
using namespace std;
int main()
{
    char str[50];
    int i,j,T,N,K,sum;
    cin>>T;
    for(i=1;i<=T;i++){
        cin>>N;
        cout<<"Case "<<i<<":"<<endl;
        sum = 0;
        for(j=1;j<=N;j++){
            cin>>str;
            if(str[0]=='d')
                cin>>K;
            else if(str[0]=='r'){
                sum += K;
                cout<<sum<<endl;
            }
        }
    }
    return 0;
}

