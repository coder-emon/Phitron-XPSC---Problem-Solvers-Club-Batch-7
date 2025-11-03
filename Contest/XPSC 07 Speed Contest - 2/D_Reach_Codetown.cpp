#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        string t = "CODETOWN";
        string s;
        cin >> s;
        for(int i = 0; i < 8; i++){
            if(t[i] != s[i]){
                if((s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') && (t[i] == 'A' || t[i] == 'E' || t[i] == 'I' || t[i] == 'O' || t[i] == 'U')){
                    swap(s[i],t[i]);
                }else if((s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U') && (t[i] != 'A' && t[i] != 'E' && t[i] != 'I' && t[i] != 'O' && t[i] != 'U')){
                    swap(s[i], t[i]);
                }
            }
        }
        
        if(s == "CODETOWN")
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    
    return 0;
}