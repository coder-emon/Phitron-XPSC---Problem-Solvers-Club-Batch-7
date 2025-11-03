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
        string s,t;
        cin >> s >> t;
        map<char,int> mp1;
        map<char,int> mp2;
        for(int i = 0; i < n; i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        if(mp1 == mp2)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    
    return 0;
}