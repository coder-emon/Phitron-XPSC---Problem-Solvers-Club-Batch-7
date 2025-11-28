#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n + 2), change(n + 2, 0), change_on_query(m+2, 0);
    vector<pair<pair<ll,ll>,ll>> query(m + 2);
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= m; i++){
        cin >> query[i].first.first >> query[i].first.second >> query[i].second;
    }

    while(k--){
        int x,y;
        cin >> x >> y;
        change_on_query[x]++;
        change_on_query[y+1]--;
        
    }

    ll c = 0;
    for(int i = 1; i <= m; i++){
        c += change_on_query[i];
        change[query[i].first.first] += query[i].second * c;
        change[query[i].first.second + 1] -=  query[i].second * c;
    }

    c = 0;
    for(int i = 1; i <= n; i++){
        c += change[i];
        a[i] += c;
        cout << a[i] << " ";
    } 
    cout << nl;
    
    return 0;
}