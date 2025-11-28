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
        int ones = __builtin_popcount(n);
        if(ones % 2 == 0){
            cout << "EVEN" << nl;
        }else{
            cout << "ODD" << nl;
        }
    }
    
    return 0;
}