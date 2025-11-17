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
    //     unordered_map<int,int> mp;
    //     for(int i = 0; i < n; i++){
    //         cin >> arr[i];
    //         mp[arr[i]] = i;
    //     }
    //     sort(arr.begin(), arr.end());
    //     vector<int> ans(n, -1);

    //     for(int i = 1; i < n -1; i++){
    //         ans[mp[arr[i]]] =(arr[i+1] + arr[i])/2 - (arr[i -1] + arr[i]) / 2;
    //     }

    //     for(auto x : ans) cout << x << " ";
    //     cout << nl;
    // }
    
    //Solution 2 vector of pairs
    while(tc--){
        int n;
        cin >> n;
        vector<pair<int,int>> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i].first;
            arr[i].second = i;
        }
        sort(arr.begin(), arr.end());
        vector<int> ans(n, -1);

        for(int i = 1; i < n -1; i++){
            ans[arr[i].second] =(arr[i+1].first + arr[i].first)/2 - (arr[i -1].first + arr[i].first) / 2;
        }

        for(auto x : ans) cout << x << " ";
        cout << nl;
    }
    return 0;
}