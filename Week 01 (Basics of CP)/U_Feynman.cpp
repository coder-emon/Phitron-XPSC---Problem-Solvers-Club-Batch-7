#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(1){
        int n;
        cin >> n;
        if(n == 0)
            break;
        ll res = (n*(n+1)*(2*n+1)) / 6;
        cout << res << nl;
    }
    
    return 0;
}