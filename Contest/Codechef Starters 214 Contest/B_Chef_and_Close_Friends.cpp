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
        int x,y,z;
        cin >> x >> y >> z;
        if(y < z){
            cout << y * 2 << nl;
        }else{
            cout << z * 2 << nl;
        }
    }
    
    return 0;
}