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
        int one = 0;
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            if(x == 1)
                one++;
        }

        if(one % 2 == n % 2)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    
    return 0;
}