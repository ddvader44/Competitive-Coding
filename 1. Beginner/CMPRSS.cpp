#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
            int n;
            int j;
            cin>>n;
            int cmp[n];
            for(int i=0;i<n;i++)
                  cin>>cmp[i];
            int x=0;
            while(x<n){
                  int cnt=0;
                  int i=x;
                  while(1){
                        if(cmp[i+1]==cmp[i]+1){
                              i++;
                              cnt++;
                        }
                        else  break;
                  }
                  if(cnt>=2){
                        for(j=x+1;j<x+cnt;j++){
                              cmp[j]=0;
                        }
                  x=j+1;
                  }
                  else{
                        x=x+cnt+1;
                  }
            }
            for(int i=0;i<n;i++){
                  if(i==0){
                        if(cmp[i+1]==0 || i==n-1)
                              cout<<cmp[i];
                        else
                        {
                              cout<<cmp[i]<<",";
                        }
                        
                  }
                  else if(cmp[i]==0 && cmp[i-1]!=0)
                        cout<<"...";
                  else if(cmp[i+1]==0 && cmp[i]!=0)
                        cout<<cmp[i];
                  else if(i==n-1)
                        cout<<cmp[i];
                  else if(cmp[i]==0)
                        continue;
                  else
                  {
                        cout<<cmp[i]<<",";
                  }
                  
            }
            cout<<endl;
      }
      return 0;
}