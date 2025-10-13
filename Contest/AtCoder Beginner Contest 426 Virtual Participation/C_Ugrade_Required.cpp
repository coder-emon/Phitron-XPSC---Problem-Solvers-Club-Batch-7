#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin >> n >> q;
    vector<int> v(n);
    for(int i = 1; i <= n; i++){
        v[i] = i;
    }

    
    while(q--){
        int x,y;
        cin >> x >> y;
        int ops = 0;
        for(int i = 1; i <= n; i++){
            if(x >= v[i]){
                v[i] = y;
                ops++;
            }
        }
        cout << ops << nl;
    }
    
    return 0;
}