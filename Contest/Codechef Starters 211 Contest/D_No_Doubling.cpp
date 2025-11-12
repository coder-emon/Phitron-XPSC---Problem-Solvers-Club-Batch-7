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
    // while(tc--){
    //     int n;
    //     cin >> n;
    //     vector<int> arr(n);
    //     for(int i = 0; i < n; i++)
    //         cin >> arr[i];
        
    //     sort(arr.begin(),arr.end(), greater<int>());

    //     ll S = 0;
    //     vector<ll> ans, equal2xSum;

    //     for (ll x : arr) {
    //         if (x == S) equal2xSum.push_back(x);
    //         else {
    //             ans.push_back(x);
    //             S += x;
    //         }
    //     }

    //     for(auto x : equal2xSum)
    //         ans.push_back(x);

    //     for(auto x : ans)
    //         cout << x << " ";
        
    //     cout << nl;
    // }

    while(tc--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        
        sort(arr.begin(),arr.end());

        cout << arr[n-1] << " ";
        for(int i = 0; i < n-1; i++)
            cout << arr[i] << " ";
        
        cout << nl;
    }
    
    return 0;
}