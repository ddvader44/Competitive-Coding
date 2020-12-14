#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
     cin >> t;
    while(t--){
    ll n,d,risk=0,count=0;
    cin>>n>>d;
    for(int i=0;i<n;i++){
       int ele;
       cin>>ele;
       if(ele>=80||ele<=9){
        risk++;
       }
   }
   if(d==1){
       count=n;
   }
   else{
      if(risk%d==0){
       count+=risk/d;
       }
      else{
       count+=((risk/d)+1);
       }
      if((n-risk)%d==0){
       count+=((n-risk)/d);
       }
       else{
       count=count+((n-risk)/d)+1;
       }
   }
  
   cout<<count<<endl;
    }
}