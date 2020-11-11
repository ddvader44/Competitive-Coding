#include<bits/stdc++.h>
using namespace std;
main() {
    int t;
    cin>>t;;
    while(t--)
    {
        long long int n,i,k,sum=0;;
        cin>>n;
        for(i=n;i>0;i=i/10)
        {
            sum=sum+(i%10);
        }
        for(i=9;i>=0;i--)
        {
            if((sum+i)%10==0)
            {
                k=i;
                break;
            }
        }
        cout<<n<<k<<endl;
    }
}