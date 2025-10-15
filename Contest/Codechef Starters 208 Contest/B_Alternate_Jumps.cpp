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
        int pos = n;
        for (int i = 1; i <= n - 1; i++) {
            int jump = n - i;

            if (i % 2 == 1)
                pos -= jump;
            else
                pos += jump;
        }
        cout << pos << nl;
    }
    
    return 0;
}