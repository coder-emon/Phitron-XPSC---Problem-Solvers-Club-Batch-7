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
    while(tc--)
    {
        int n,m;
        cin >> n >> m;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        
        int maxVal = INT_MIN;
        for(int i = 0; i < m; i++ ){
            int y;
            cin >> y;
            maxVal =  max(maxVal,y);
        }

        sort(a.end() - maxVal, a.end());

        for(auto x : a)
            cout << x << " ";
        
        cout << nl;
    }
    return 0;
}