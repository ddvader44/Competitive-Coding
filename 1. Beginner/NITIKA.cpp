#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin>>t;
    cin.get();
    while(t--)
    {   
        string name;
        getline(cin, name);
        string ans="", temp="";
        int l = name.length();

        int flag = 0, st = 0;
        for (int i = 0; i < l; i++)
        {
            if (i > 0)
                st = 1;
            if (name[i] == ' ')
            {
                ans += temp[0];
                ans += ". ";
                temp = "";
                flag = 0;
                continue;
            }
            if (flag == 0)
            {
                name[i] = toupper(name[i]);
                flag = 1;
            }
            else
                name[i] = tolower(name[i]);
            temp += name[i];
        }
        ans += temp;
        
        cout<<ans<<endl;
    }
}