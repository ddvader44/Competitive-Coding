#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int t;
    cin >> t;
    while(t--){
        int n,infectedCount=1;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i] ;
        }
        int max=0,min=100;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]<=2){
                infectedCount++ ;
            } else{
                if(max<infectedCount) { max = infectedCount;}
                if(min>infectedCount) {min = infectedCount;}
                infectedCount=1;
            }
        }
        if(max<infectedCount) { max = infectedCount;}
        if(min>infectedCount) {min = infectedCount;}
        cout << min << " " << max << endl;
    }
    return 0;
    }