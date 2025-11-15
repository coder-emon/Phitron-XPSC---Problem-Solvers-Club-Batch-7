#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    vector<int> dif(n+2), pre(n+2);
    for(int i = 1; i <= q; i++){
        int l, r, x;
        cin >> l >> r >> x;
        dif[l] += x;
        dif[r+1] -= x;
    }

    for(int i = 1; i <= n; i++){
        pre[i] = pre[i - 1] + dif[i];
    }

    for(int i = 1; i <= n; i++){
        cout << pre[i] + a[i] << " ";
    }
    
    return 0;
}