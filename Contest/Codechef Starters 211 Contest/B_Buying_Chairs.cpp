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
        int w,p,k;
        cin >> w >> p >> k;
        if(w >= k)
            cout << k * 2 << nl;
        else if(w < k){
            int rem = k - w;
            int res = (w * 2) + rem;
            cout << res << nl;
        }
    }
        
    
    return 0;
}