#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
signed main() {
    ll n,m,k,count=0;
    ll q;
    cin >> n >> m >> k;
    ll t[k];
    for(ll i=0;i<n;i++){
        ll sum=0;
        for(ll j=0;j<k;j++){
            cin >> t[j];
        }
        cin >> q;
        for(ll r=0;r<k;r++){
            sum+=t[r];
        }
        if(sum >= m && q<=10){
            count++ ;
        }
    }
    cout << count << endl;
}