#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        bool flag= true , flag2 = false;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]!=1) { 
            flag2 = true;
            break;
            }
        }
        sort(a,a+n);
         for(int i=1;i<n;i++){
            if(a[i]-a[i-1]!=1) { 
            flag=false;
            break;
            }
        }
        if(a[0]==1&&flag&&flag2){cout<<"yes"<<endl;}
        else{cout<<"no"<<endl;}
         }
    return 0;
    }