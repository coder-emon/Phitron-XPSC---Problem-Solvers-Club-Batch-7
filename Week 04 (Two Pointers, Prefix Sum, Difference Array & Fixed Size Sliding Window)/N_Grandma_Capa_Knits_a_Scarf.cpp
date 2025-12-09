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
        int ans = 1e9;
        for(char c = 'a'; c <= 'z'; c++){
            int l = 0, r = n -1;
            int remove = 0;
            while(l < r){
                if(s[l] == s[r]){
                    l++;
                    r--;
                }
                else if(s[l] == c){
                    l++; 
                    remove++;
                }
                else if(s[r] == c) {
                    r--; 
                    remove++;
                }
                else{
                    remove = 1e9;
                    break;
                }
            }
            ans = min(ans, remove);
        }
        if(ans == 1e9) cout << -1 << nl;
        else cout << ans << nl;
    }
    
    return 0;
}