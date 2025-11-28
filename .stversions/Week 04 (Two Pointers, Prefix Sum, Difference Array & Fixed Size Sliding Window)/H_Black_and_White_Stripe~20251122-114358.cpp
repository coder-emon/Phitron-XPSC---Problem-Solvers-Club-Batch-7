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
        int B = 0, W = 0, consB = 0;
        int j = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'B'){
                B++;
                consB = max(B, consB);
                if(B >= consB)  j = i;
            }else{
                B = 0;
                W++;
            }
        }

        if(consB >= k)
            cout << 0  << nl;
        else{
            int wCnt = 0;
            for(int i = j; i < n; i++){
                if(consB + wCnt >= k) break;
                if(s[i] == 'W') wCnt++;
            }
            if(consB + wCnt >= k){
                cout << wCnt << nl;
            }else{
                wCnt = 0;
                for(int i = j; i >= 0; i--){
                    if(consB + wCnt >= k) break;
                    if(s[i] == 'W') wCnt++;
                }
                if(consB + wCnt >= k)
                    cout << wCnt << nl;
            }

        }
    }
    
    return 0;
}