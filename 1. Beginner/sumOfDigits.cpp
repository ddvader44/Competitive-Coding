#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
      int a,sum=0;
      cin >> a;
      while(a!=0)
      {
      sum= sum + a%10;
      a= a/10;
      }
    cout << sum << endl;
    }
    return 0;
}