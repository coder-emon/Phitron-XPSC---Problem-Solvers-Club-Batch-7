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
        int n,c;
        cin >> n >> c;
        string s;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        cin >> s;

        int sum0 = 0, sum1 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') sum0 += a[i];
            else sum1 += a[i];
        } 

        int ans = sum0;

        if (sum0 >= c && sum1 > c)
            ans = max(ans, sum0 + sum1 - c);

        cout << ans << nl;
    }
    
    return 0;
}