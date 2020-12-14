#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
signed main() {
    ll t;
    cin >> t;
    while(t--){
        ll a , b;
        cin >> a >> b;
        ll res;
        ll x,y,xx,yy;
        x = a/2;
        xx = a - x;
        y = b/2;
        yy = b - y;
        res = x*y + xx*yy;
        cout << res << endl;
    }
    }