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
        ll n;
        cin >> n;
        set<ll> st;
        ll sum = 0;
        bool duplicate = false;
        int oddCnt = 0, evenCnt = 0;
        for(int i = 0; i < n; i++){
            ll x;
            cin >> x;
            if(x % 2 == 0)
                evenCnt++;
            else
                oddCnt++;
            sum += x;
            if(st.count(x))
                duplicate = true;
            st.insert(x);
        }

        if(duplicate || sum % n == 0 || oddCnt % 2 == 0 || evenCnt % 2 == 0)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    
    return 0;
}