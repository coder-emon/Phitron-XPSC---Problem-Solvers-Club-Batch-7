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
        int n, a, b;
        cin >> n >> a >> b;
        vector <int> dis;
        for(int i = 0; i < n; i++){
            int x,y;
            cin >> x >> y;
            int res = abs(a - x) + abs(b - y);
            dis.push_back(res);

        }
        sort(dis.begin(), dis.end());
        cout << dis[0] << nl;
    }
    
    return 0;
}