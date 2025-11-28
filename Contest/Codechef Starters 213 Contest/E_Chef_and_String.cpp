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
        ll n,k;
        cin >> n >> k;
        string s, a;
        cin >> s;
        
        for(auto c : s){
            if(c != 'I')
                a.push_back(c);
        }
        ll ans = (1LL * n * k) -1;

        ll cnt = 0;
        for(int i = 1; i < a.size(); i++){
            if(a[i] != a[i-1])
                cnt++;
        }
        ll rmv = 1LL * cnt * k;
        if(a[0] != a[a.size()-1]){
            rmv += (k-1);
        }

        ans -= rmv;
        cout << ans << nl;
        

    }
    
    return 0;
}