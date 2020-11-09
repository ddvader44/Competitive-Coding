#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int t;
    cin >> t;
    while (t--)
    {
        int n,rev=0,rem;
        cin >> n;
        while(n!=0){
            rem = n%10;
            rev = rev*10 + rem;
            n = n/10;
        }
        cout << rev << endl;
    }
    return 0;
    }