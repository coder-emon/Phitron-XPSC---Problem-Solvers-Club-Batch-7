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

        int m;
        cin >> m;
        for(int i = 0; i < m; i++){
            string s;
            cin >> s;
            int j = 0, k = n-1;
            bool flag = true;
            if(s.size() != n)
                flag = false;
            if(flag){
                while(j < k){
                if((s[j] == s[k]) != a[j] == a[k]){
                    flag = false;
                }
                j++;
                k--;
                }
            }
 
            if(flag)
                cout << "YES" << nl;
            else
                cout << "NO" << nl;
        }
    }
    
    return 0;
}