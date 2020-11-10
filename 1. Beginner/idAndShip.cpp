#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        char a;
        cin >> a;
        a = char(tolower(a));
        switch(a)
        {
        case 'b':
            cout << "BattleShip" << endl ;
            break;
        case 'c':
            cout << "Cruiser"<< endl ;
            break;
        case 'd':
            cout << "Destroyer" << endl ;
            break;  
        case 'f':
            cout << "Frigate" << endl;
            break;      
        default: 
            cout << "" ;   
            break;
        }
    }
}