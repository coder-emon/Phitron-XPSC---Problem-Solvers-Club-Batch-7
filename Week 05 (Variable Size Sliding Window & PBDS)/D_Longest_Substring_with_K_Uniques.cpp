#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int k;
    cin >> s >> k;
    int n = s.size();
    int l = 0, r = 0;
    int ans = -1;
    map<char,int> mp;
    while(r < n){
        mp[s[r]]++;
        if(mp.size() == k){
            ans = max(ans, r - l + 1);
        }else{
            while(mp.size() > k && l <= r){
                mp[s[l]]--;
                if(mp[s[l]] == 0) mp.erase(s[l]);
                l++;
            }
        }
        r++;
    }
    cout << ans;
    
    return 0;
}