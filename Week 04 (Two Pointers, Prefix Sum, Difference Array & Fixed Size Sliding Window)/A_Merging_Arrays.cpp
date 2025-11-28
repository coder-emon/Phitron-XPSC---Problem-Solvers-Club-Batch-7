#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        int n, m;
        cin >> n >> m;
        vector<ll> a(n),b(m),c(0);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        for(int i = 0; i < n; i++) c.push_back(a[i]);
        for(int i = 0; i < m; i++) c.push_back(b[i]);

        sort(c.begin(),c.end());

        for(int i = 0; i < n+m; i++ ) cout << c[i] << " ";

    
    return 0;
}