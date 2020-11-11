#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int t;
    cin >> t;
    while(t--){
        int arr[100];
        int count=0;
        for(int i=0;i<100;i++){
            cin >> arr[i];
            if(arr[i]<=30){
                count++ ;
            }
        }
        if(count>=60){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
    }