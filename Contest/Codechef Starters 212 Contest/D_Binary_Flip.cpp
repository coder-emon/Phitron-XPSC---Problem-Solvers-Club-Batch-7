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
        int cnt00 = 0, cnt11 = 0;
        for(int i = 0; i < n -1; i++){
            if(s[i] == '1' && s[i+1] == '1')
                cnt11++;
            if(s[i] == '0' && s[i+1] == '0')
                cnt00++;
        }
        if(cnt11 >= cnt00){
            cout << 0 << nl;
        }else{
            int diff = cnt00 - cnt11;
            int ans = (diff + 1) / 2;
            
            cout << ans << nl;
        }

    }
    
    return 0;
}