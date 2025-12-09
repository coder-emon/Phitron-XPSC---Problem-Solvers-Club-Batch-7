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
        vector<int> a(n);
        for(auto &x : a)cin >> x;
        sort(a.begin(),a.end());
        int ans = -1;
        for(int sum = 1; sum <= 100; sum++){
            int l = 0, r = n-1, cnt = 0;
            while(l < r){
                if(a[l]+a[r] == sum)cnt++, l++, r--;
                else if(a[l]+a[r] > sum) r--;
                else l++;
            }
            ans = max(ans, cnt);
        }
        cout << ans << nl;
    }
    
    return 0;
}