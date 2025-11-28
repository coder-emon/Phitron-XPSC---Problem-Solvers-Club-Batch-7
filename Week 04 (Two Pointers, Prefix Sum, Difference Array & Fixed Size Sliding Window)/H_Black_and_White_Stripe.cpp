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
        int cntW = 0;
        for(int i = 0; i < k; i++){
            if(s[i] == 'W') cntW++;
        }

        int result = cntW;
        for(int i = k; i < n; i++){
            if(s[i-k] == 'W') cntW--;
            if(s[i] == 'W') cntW++;
            result = min(cntW, result);
        }
        cout << result << nl;
    }
    
    return 0;
}