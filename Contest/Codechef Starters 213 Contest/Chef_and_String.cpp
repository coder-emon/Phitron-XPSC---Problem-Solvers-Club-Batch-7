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
        ll n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        set<int> st;
        for(auto c : s){
            if(c != 'I')
                st.insert(c);
        }

        if(st.size() <= 1){
            cout << n * k -1 << nl;
            continue;
        }

        ll matchInside = 0;
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1] || s[i] == 'I' || s[i-1] == 'I')
                matchInside++;
        }

        ll boundaryAdd = 0;
        if(s[0] == s[n-1] || s[0] == 'I' || s[n-1] == 'I')
            boundaryAdd = k - 1;

        cout << matchInside * k + boundaryAdd << nl;
    }
    
    return 0;
}