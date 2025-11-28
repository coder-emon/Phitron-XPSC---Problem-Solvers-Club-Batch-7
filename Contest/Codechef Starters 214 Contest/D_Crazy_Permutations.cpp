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
        vector<ll> a(n+1);
        vector<ll> b(n+1);
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) cin >> b[i];

        if(a == b){
            cout << "Yes" << nl;
            continue;
        }else{
            bool flag = true;
            for(int i = 1; i < n; i++){
                if(a[i] < a[i+1] && b[i] > b[i+1] || a[i] > a[i+1] && b[i] < b[i+1] ){
                   flag = false;
                   break;
                }
            }
            if(flag) cout << "Yes" << nl;
            else cout << "No" << nl;
        }
    }
    
    return 0;
}