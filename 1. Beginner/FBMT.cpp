#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int t;
    cin >> t;
    while(t--){
        int n,score1=0,score2=0,k,d;
        cin >> n;
        string arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[0]==arr[i]){
                score1++;
                k=i;
            }else{
                score2++ ;
                d=i;
            }
        }
        if(score1>score2)
	    cout<<arr[k]<<endl;
	    else if(score2>score1)
	    cout<<arr[d]<<endl;
	    else
	    cout<<"Draw"<<endl;
    }
    return 0;
    }