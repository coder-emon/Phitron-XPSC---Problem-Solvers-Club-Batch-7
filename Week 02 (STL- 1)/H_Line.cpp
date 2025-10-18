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
        string s;
        cin >> n >> s;

        ll total = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L')
                total += i;              
            else
                total += (n - i - 1);    
        }

        vector<ll> gains;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                ll gain = (n - i - 1) - i;
                if (gain > 0) gains.push_back(gain);
            } else {
                ll gain = i - (n - i - 1);
                if (gain > 0) gains.push_back(gain);
            }
        }

        sort(gains.rbegin(), gains.rend());

        vector<ll> ans;
        for (int k = 0; k < n; k++) {
            if (k < (int)gains.size()) {
                total += gains[k]; 
            }
            ans.push_back(total);
        }

        
        for (auto v : ans) cout << v << " ";
        cout << nl;
    }
    
    return 0;
}