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
        int n,x;
        cin >> n >> x;
        string s;
        cin >> s;
        if(s[0] == '0'){
            cout << "NO" << nl;
            continue;
        }
        int maxConsZeros = 0, current = 0;
        for(auto c : s){
            if(c == '0'){
                current++;
                maxConsZeros = max(maxConsZeros,current);
            }else{
                current = 0;
            }
        }
        if(maxConsZeros > x ){
            cout << "NO" << nl;
        }else{
            cout << "YES" << nl;
        }
    }
    
    return 0;
}