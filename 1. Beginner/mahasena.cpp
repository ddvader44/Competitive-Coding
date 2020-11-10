#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    
   int a,evencount=0,oddcount=0,b;
   cin >> a;
        for(int i=0;i<a;i++){
            cin >> b;
            if(b%2==0){
                evencount++ ;
            } else {
                oddcount++ ;
            }
        }
        if(evencount > oddcount){
            cout << "READY FOR BATTLE" << endl;
        } else{
            cout << "NOT READY" << endl ;
        }
    
    return 0;
    }