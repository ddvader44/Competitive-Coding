#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
        ll d,v,dd,vv,p,i;
        cin >> d >> v >> dd >> vv >> p;
        ll vaccineCount=0;
        for(i=1;i<=100000;i++){
            if(d<=i){
                vaccineCount+=v;
            }
            if(dd<=i){
                vaccineCount+=vv;
            }
            if(vaccineCount>=p){
                break;
            }
        }
        cout << i << endl;
}