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
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cin >> a[i][j] ;
            }
        }
        for(int i = n-2; i >= 0; i--)
	        for(int j = 0; j <= i; j++)
	            a[i][j] += max(a[i+1][j], a[i+1][j+1]);

	    cout << a[0][0]<<endl;
	    }
    return 0;
    }