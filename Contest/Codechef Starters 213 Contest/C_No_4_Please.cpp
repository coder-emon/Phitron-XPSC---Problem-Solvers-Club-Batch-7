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
        int c1 = 0, c2 = 0, c3 = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 1) c1++;
            if(x == 2) c2++;
            if(x == 3) c3++;
        }
        int del13 = 0;
        if(c1 > 0 && c3 > 0)
            del13 = min(c1, c3);

        int del2 = max(0, c2 - 1);

        cout << del13 + del2 << nl;
    }
    
    return 0;
}