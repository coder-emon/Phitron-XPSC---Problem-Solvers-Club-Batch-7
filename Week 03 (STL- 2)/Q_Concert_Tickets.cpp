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

    multiset<int> st;
    for(int i = 0; i < n; i++){
        int h;
        cin >> h;
        st.insert(h);
    }

    for(int i = 0; i < m; i++){
        int t;
        cin >> t;
        auto it = st.upper_bound(t);
        if(it == st.begin()){
            cout << -1 << nl;
        }else{
            it--;
            cout << *it << nl;
            st.erase(it);
        }
    }
    
    return 0;
}