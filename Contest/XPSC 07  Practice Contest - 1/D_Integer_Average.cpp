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
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >>v[i];
        }

        int oddCnt = 0, evenCnt = 0;
        for(int i = 1; i < n; i++){
            if(v[i] % 2 != 0)
                oddCnt++;
            else
                evenCnt++;
        }
        if(oddCnt >= 2 || evenCnt >= 2)
            cout << "Yes" << nl;
        else
            cout << "No" << nl;
    }
    
    return 0;
}