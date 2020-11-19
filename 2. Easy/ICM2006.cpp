#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        enum City {Red,Blue,Yellow,Pink,Green} city = Red;
        for(size_t i=0;i<s.length();i++){
            switch (city)
            {
            case Red:
                if(s[i]=='1'){
                    city = Blue;
                }
            break;
            case Blue:
                if(s[i]=='0'){
                    city = Yellow;
                }
            break;
            case Yellow:
                if(s[i]=='0'){
                    city = Pink;
                } else{
                    city = Blue;
                }
            break;
            case Pink:
                if(s[i]=='0'){
                    city = Green;
                } else{
                    city = Blue;
                }
            break;
            case Green:
                if(s[i]=='0'){
                    city = Red;
                }else{
                    city = Blue;
                }
            break;
            }
        }
        cout << (city == Green ? "YES" : "NO") << endl;
    }
    return 0;
}