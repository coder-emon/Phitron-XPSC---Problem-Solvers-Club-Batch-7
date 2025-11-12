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
        int even = 0, odd = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x % 2 == 0)
                even++;
            else
                odd++;
        }

        int oddNum = odd -1;
        int res = 1 + even + (oddNum / 2);
        if(even == n)
            cout << 0 << nl;
        else
            cout << res << nl;
    }
    
    return 0;
}