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
        bool hasEven = false, hasOdd = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) hasEven = true;
            else hasOdd = true;
        }

        if (hasEven && hasOdd)
            sort(a.begin(), a.end());

        for (int x : a){
           cout << x << " "; 
        } 
        cout << nl;
    }
    
    return 0;
}