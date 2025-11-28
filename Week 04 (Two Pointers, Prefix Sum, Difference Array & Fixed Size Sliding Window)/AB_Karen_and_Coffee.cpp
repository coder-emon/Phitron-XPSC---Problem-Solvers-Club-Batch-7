#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,q;
    cin >> n >> k >> q;
    vector<int> diff(200005,0);
    for(int i = 1; i <= n; i++){
        int l,r;
        cin >> l >> r;
        diff[l]++;
        diff[r+1]--;
    }
    for(int i = 1; i <= 200000; i++){
        diff[i] = diff[i] + diff[i-1];
    }

    vector<int> good(200000, 0);
    for(int i = 1; i <= 200000; i++){
        good[i] = (diff[i] >= k) ? 1 : 0;
    }

    for(int i = 1; i <= 200000; i++){
        good[i] += good[i-1];
    }

    
    while(q--){
        int a,b;
        cin >> a >> b;
        int ans = good[b] - good[a-1];
        cout << ans << nl;
    }
    
    return 0;
}