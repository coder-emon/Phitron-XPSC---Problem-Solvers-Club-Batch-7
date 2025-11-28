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
        ll n;
        cin >> n;
        ll a = (n-1)/2;
        ll b = (n-2)/2;
        cout << a * b << nl;
    }
    
    return 0;
}