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
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(s[i] =='B'){
                cnt++;
                i+=k-1;
            }
        }
        cout << cnt << nl;
    }
    
    return 0;
}