#include<bits/stdc++.h>
using namespace std;
 int main() {
     int t;
     cin >> t;
     while(t--){
         string a;
         cin >> a;
        char firstD = int(a[0]);
        int length  = a.length();
        char lastD = int(a[length-1]);
        int f = firstD - '0';
        int l = lastD - '0';
        cout << f + l << endl ;
     }
     return 0;
 }