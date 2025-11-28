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
        bool flag = true;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x < 5){
                flag = false;
            } 
        }
        if(flag) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
    
    return 0;
}