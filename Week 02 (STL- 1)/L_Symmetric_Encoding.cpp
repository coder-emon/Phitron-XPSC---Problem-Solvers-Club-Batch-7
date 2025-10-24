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
        string s;
        cin >> n >> s;
        set<char> st (s.begin(),s.end());
        string r (st.begin(),st.end());

        unordered_map<char,char> mp;
        int k = r.size();
        for(int i = 0; i < k; i++){
            mp[r[i]] = r[k - 1 - i];
        }

        for(char &c : s){
            c = mp[c];
        }
        
        cout << s << nl;
    }
    
    return 0;
}