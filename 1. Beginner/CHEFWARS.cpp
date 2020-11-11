#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int t;
    cin >> t;
    while(t--){
        int h,p;
        cin >> h >> p;
        while(h>0 && p>=1){
            h = h - p;
            p = p/2;
        }
        if(h>p){
            cout << "0" << endl;
        }else{
            cout << "1" << endl;
        }
    }
    return 0;
    }