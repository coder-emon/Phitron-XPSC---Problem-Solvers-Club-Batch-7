#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    vector<int> nums(n+1), suf(n+1);
    for(int i = 1; i <= n; i++){
        cin >> nums[i];
    }

    set<int> st;
    for(int i = n; i > 0; i-- ){
        int x = nums[i];
        st.insert(x);
        suf[i] = st.size();
    }

    for(int i = 1; i <= m; i++){
        int x;
        cin >> x;
        int res = suf[x];
        cout << res << nl;
    }
    
    return 0;
}