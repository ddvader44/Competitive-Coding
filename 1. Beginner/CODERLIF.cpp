#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int t;
    cin >> t;
    while(t--){
        int work[30],i,k,flag=1,count;
        for(i=0;i<30;i++){
            cin >> work[i] ;
        }
        for(i=0;i<25;i++){
            if(work[i]==1){
                count =0;
                for(k=i;k<i+5;k++){
                    if(work[k]==1){
                        count++ ;
                    }
                }
                    if(count==5 && work[k]==1){
                        flag=0;
                        break;
                    }
                }
            }
            if(flag)
	        {cout<<"#allcodersarefun"<<endl;}
	    else{
	        cout<<"#coderlifematters"<<endl;}
         }
    return 0;
    }