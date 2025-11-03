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
        float x,y,z;
        cin >> x >> y >> z;
        if(z / (x * y) > 0.5)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    
    return 0;
}