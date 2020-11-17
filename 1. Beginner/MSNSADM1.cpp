#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int pts[n];
        int fouls[n];
        int final=0,maxx=0;
        for(int i=0;i<n;i++){
            cin >> pts[i];
        }
        for(int i=0;i<n;i++){
            cin >> fouls[i];
        }
        for(int i=0;i<n;i++){
            final = pts[i]*20 - fouls[i]*10;
            if(final<0){
                final =0;
            }
            maxx = max(maxx,final);
        }
        cout << maxx << endl;
         }
    return 0;
    }