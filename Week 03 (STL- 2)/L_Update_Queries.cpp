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
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<int> ind;
        for(int i = 0; i < m; i++){
            int x;
            cin >> x;
            ind.insert(x);
        }
        string c;
        cin >> c;
        sort(c.begin(),c.end());
        int k = 0;
        for(auto x : ind){
            s[x -1] = c[k++];
        }
        cout << s << nl;
    }
    
    return 0;
}