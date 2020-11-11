#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,points=0,rank,severity;
        string origin,comp;
        cin>>n>>origin;
        for(int i=0;i<n;i++){
            cin >> comp;
            if(comp=="CONTEST_WON"){
	            cin>>rank;
	            if(rank<=20)
	            points+=300+20-rank;
	            else
	            points+=300;
	        }
            else if(comp=="TOP_CONTRIBUTOR") { points+=300;}
            else if(comp=="BUG_FOUND") {
                cin >> severity;
                points+=severity;
            } else if(comp=="CONTEST_HOSTED"){
                points+=50;
            }
     }
     int month;
     if(origin=="INDIAN"){
         month = points/200;
     } else{
         month = points/400;
     }
     cout << month << endl;
    }
    return 0;
    }