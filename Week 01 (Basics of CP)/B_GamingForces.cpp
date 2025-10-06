//https://codeforces.com/problemset/problem/1792/A

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
        for(int i = 0; i < n; i++){
            cin >> a[i];

        }
        sort(a.begin(), a.end());

        if(n == 1){
            cout << n << nl;
        }else{
            int i = 0;
            int cnt = 0;
            while(i < n){
                if(i + 1 < n && a[i] == 1 && a[i+1] == 1){
                    a[i]--;
                    a[i+1]--;
                    cnt++;
                    i+=2;
                }else if(a[i] >= 1){
                    a[i]--;
                    cnt++;
                    i++;
                }
                
            }

            cout << cnt << nl;
        }

    }
    
    return 0;
}