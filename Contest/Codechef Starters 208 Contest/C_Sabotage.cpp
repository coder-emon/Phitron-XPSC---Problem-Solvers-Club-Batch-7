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
        int n,x,k;
        cin >> n >> x >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i = 0; i < k; i++){
            v[i] = 0;
        }
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(v[i] > x+(100*k)){
                cnt++;
            }
        }
        cout << cnt+1 << nl;
    }
    
    return 0;
}