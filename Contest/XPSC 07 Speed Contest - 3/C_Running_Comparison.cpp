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
        vector<int> alice(n);
        vector<int> bob(n);
        for(auto &x : alice)
            cin >> x;
        for(auto &x : bob)
            cin >> x;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(alice[i] <= bob[i] * 2 && bob[i] <= alice[i] * 2)
                cnt++;
        }
        cout << cnt << nl;
    }
    
    return 0;
}