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
        vector<ll> fruits(n), heights(n);
        for(auto &x : fruits) cin >> x;
        for(auto &x : heights) cin >> x;
        ll l = 0, r = 0;
        ll sum = 0, ans = 0;
        while(r < n){
            sum += fruits[r];
            if((r < n-1) && sum <= k && (heights[r] % heights[r+1] == 0)){
                ans = max(ans, r-l+1);
                r++;
            }else{
                if((r < n-1)  && (heights[r] % heights[r+1] != 0)){
                    if(sum <= k){
                        ans = max(ans, r-l+1);
                    }
                    l = r+1;
                    r = l;
                    sum = 0;
                }else{
                    if(sum <= k){
                        ans = max(ans, r-l+1);
                    }
                    sum -= fruits[l];
                    l++;
                    r++;
                }
            }
        }
        cout << ans << nl;
    }
    
    return 0;
}