#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
       if(n==1){
			cout<<"yes"<<endl;
			continue;
		}
        int flag=1;
		for(int i=0;i<n-1;i++){
			if(s[i]=='E' && s[i+1]=='C'){
				flag=0;
				break;
			}
			if(s[i]=='S' && s[i+1]=='E'){
				flag=0;
				break;
			}
			else if(s[i]=='S' && s[i+1]=='C'){
				flag=0;
				break;
			}
		}
		if(flag){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}    
    }
    return 0;
    }