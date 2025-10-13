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
    while (tc--){
        int n;
        string s;
        cin >> n >> s;
        int firstB = s.find('B');
        int lastB = s.rfind('B');
        int res = lastB - firstB + 1;
        cout << res << nl;
    }
    
    return 0;
}