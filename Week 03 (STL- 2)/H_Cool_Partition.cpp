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
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        set<int> s1;
        set<int> temp;
        vector<int> last(n+1,-1);

        for(int i = 0; i < n; i++) last[a[i]] = i;
        int maxRight = -1, segments = 0;
        for(int i = 0; i < n; i++){
            maxRight = max(maxRight, last[a[i]]);
            if(i == maxRight)
                segments++;
        }
        cout << segments << nl;
    }
    
    return 0;
}