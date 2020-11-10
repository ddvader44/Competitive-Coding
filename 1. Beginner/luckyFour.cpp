#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        int count = 0;
        cin >> a;
        for(int i=0;i<a.length();i++){
            char digit = int(a[i]);
            int dd = digit - '0';
            if(dd==4){
                count++ ;
            }
        }
        cout << count << endl;
    }
    return 0;
}