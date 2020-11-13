#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
       int b;
       cin >> b;
       int tArea = b*b/2;
       if(tArea >= 4){
           cout << tArea/4 << endl;
       } else{
           cout << "0" << endl;
       }
    }
    return 0;
    }