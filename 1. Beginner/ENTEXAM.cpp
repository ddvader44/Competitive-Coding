#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
       int N,K,E,M,x;
       cin >> N >> K >> E >> M;
       long long temp;
       long long sum[10000];
       for(int i=1;i<N;i++){
        temp=0;
           for(int j=1;j<=E;j++){
               cin >> x;
               temp+=x;
           }
           sum[i] = temp;
       }
       sort(sum+1,sum+N);
       long long sergey = 0;
       for(int i=1;i<E;i++)
        {
            cin>>x;
            sergey+=x;
        }
        int realind=N-K;
        long long val=sum[realind];
        if(sergey>val) cout<<0<<endl;
        else if(val-sergey+1<=M) cout<<val-sergey+1<<endl;
        else cout<<"Impossible"<<endl; 
    }
    return 0;
    }