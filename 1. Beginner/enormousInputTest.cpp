#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 

    int n,k;
    cin >> n >>k;
    int i,t,count = 0;
    for(i=0;i<n;i++){
        cin >> t;
        if(t%k ==0){
            count++ ;
        }
    }
    cout << count << endl;
    return 0;
}