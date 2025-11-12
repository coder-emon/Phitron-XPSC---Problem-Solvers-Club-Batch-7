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
        int n;
        cin >> n;
        string s;
        cin >> s;

        // for(int i = 0; i < s.size();){
        //     if(s[i] == '1' && s[i+1] == '0'){
        //         s.erase(i+1, 1);
        //     }else{
        //         i++;
        //     }
        // }
        // int birds = 0;
        // for(int i = 0; i < s.size(); i++){
        //     if(s[i] == '0')
        //         birds++;
        // }
        // cout << birds << nl;

        int birds = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0')
                birds++;
            else
                break;
        }
        cout << birds << nl;
    }
    
    return 0;
}