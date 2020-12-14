#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

signed main() {
    int t;
    cin >> t;
    while(t--){
         ll n,x;
        cin>>n>>x;
        ll arr[n];
        for(ll i=0;i<n;i++){
           cin>>arr[i];
    }
        ll j=0,count=0;
        for(ll i=0;i<x;)
        {
            if(j==n-1)
                break;
            if(arr[j]==0)
            {
                j++;
                continue;
            }
            ll temp=log2(arr[j]);
            ll temp1=pow(2,temp);
            ll l;
            for(l=j+1;l<n-1;l++)
            {
                if((arr[l]^temp1)<arr[l])
                break;
            }
            arr[j]=arr[j]^temp1;
            arr[l]=arr[l]^temp1;
            count++;
            i++;
        }
        if(n==2 && (x-count)%2==1 && (x-count)>0)
        {
            arr[0]=arr[0]^1;
            arr[1]=arr[1]^1;
        }
        for(ll i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    }