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
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int totalDisturb = 0;
        for(int person = n; person >= 1; person--){
            int idx = find(v.begin(),v.end(),person) - v.begin();
            
            int left = idx;
            int right = (int)v.size() - idx - 1;
            totalDisturb += min(left,right);
            v.erase(v.begin() + idx);
        }
        cout << totalDisturb << nl;

    }
    
    return 0;
}