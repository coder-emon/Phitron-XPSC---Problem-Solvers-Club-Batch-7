#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cin >> m;
    vector<int> arr(m);
    for(int i = 0; i < m; i++) cin >> arr[i];
    int k;
    cin >> k;

    int l = 0, r = 0;
    ll sum = 0, ans = 0;
    while(r < m){
        sum += arr[r];
        if(r - l + 1 == k){
            ans = max(ans,sum);
            sum -= arr[l];
            l++; r++;
        }else{
            r++;
        }
    }

    cout << ans;
    
    return 0;
}