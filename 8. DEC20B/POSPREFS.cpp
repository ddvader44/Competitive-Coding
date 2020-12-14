#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
int main() {
    int t = 1;
    cin >> t;
    while(t--) {
      int i, n, m,k,count=0;
    cin>>n>>k;
  
    if(k<n-k){
      fo(i,2*k){
        if(i%2!=0){
          cout<<i+1<<" ";
        }
        else{
          cout<<-1*(i+1)<<" ";
        }
      }
      Fo(i,2*k,n){
       cout<<-1*(i+1)<<" ";
      }
    }
    else{
      fo(i,2*(n-k)){
        if(i%2!=0){
          cout<<i+1<<" ";
        }
        else{
          cout<<-1*(i+1)<<" ";
        }
      }
      Fo(i,2*(n-k),n){
        cout<<(i+1)<<" ";
      }
    }
    cout<<endl;
    }

    return 0;
}