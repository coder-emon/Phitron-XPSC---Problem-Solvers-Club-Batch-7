//https://codeforces.com/problemset/problem/1831/A

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
        vector<int> b(n);
        
        if(n == 1){
            cout << a[0] << nl;
            continue;
        }
        int i = 0;
        while(i <  n){
            b[i] = n - a[i] + 1;
            i++;
        }
        for(int x : b)
            cout << x << " ";
        
        cout << nl;
    }
    
    return 0;
}