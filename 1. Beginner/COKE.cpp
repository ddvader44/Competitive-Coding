#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int N,M,K,L,R;
        cin >> N>>M>>K>>L>>R;
        int C[N];
        long long int P[N];
        long long int min = 10000000;
        for(int i=0;i<N;i++){
            cin >> C[i] >> P[i] ;
        }  
        int price=0, flag=0;
        for(int j=0; j<N; j++){
        
            if(abs(C[j]-K)<=M)
            C[j]=K;
            else if(C[j]>K)
            C[j]-=M;
            else if(C[j]<K)
            C[j]+=M;
        }
        for(int j=0;j<N;j++){
            if(C[j]>=L && C[j]<=R){
                if(min>P[j]){
                min = P[j] ;
                flag=1;
            }
            }
        }
        if(flag==1){
            cout << min << endl;
        }else{
            cout << -1 << endl;
        }
        
    }
    return 0;
    }