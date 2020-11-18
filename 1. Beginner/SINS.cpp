#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t=0;
	cin>>t;
	
	while(t--)
	{
	     long int m,b;
	     cin>>m>>b;
	     
	     
	     cout<<__gcd(m,b)*2<<endl;
	}
	return 0;
}