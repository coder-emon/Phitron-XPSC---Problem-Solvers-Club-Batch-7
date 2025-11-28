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
        vector<ll> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        ll sum = 0;
        for(int i = 0; i < n; i++){
            sum+= abs(arr[i]);
        }

        int idx = 0, move = 0;
        while(idx < n){
            if(arr[idx] < 0){
                while(idx < n && arr[idx] <= 0){
                    idx++;
                }
                move++;
            }else{
                idx++;
            }
        }

        cout << sum << " " << move << nl;
    }
    
    return 0;
}