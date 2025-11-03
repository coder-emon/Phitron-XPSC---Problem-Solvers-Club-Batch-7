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
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a == b && b == c && c == d)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    
    return 0;
}