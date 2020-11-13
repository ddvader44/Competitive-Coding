#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k,v;
        cin >> n >> k >> v;
        int x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        int sum=0;
        for(int i = 0; i < n; i++){
            sum = sum + a[i];
        }
        x=(v*n+v*k-sum)/k ;
        if((v*n+v*k-sum)%k ==0 && (v*n+v*k) > sum){
            cout<<x<<endl;
        } else{
            cout << "-1" << endl;
        }
    }
    return 0;
    }