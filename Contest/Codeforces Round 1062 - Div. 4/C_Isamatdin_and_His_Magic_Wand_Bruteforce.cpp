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
        for(int i = 0; i < n -1; i++){
            for(int j = i + 1; j < n; j++){
                if(a[i] %  2 != a[j] % 2 && a[i] > a[j]){
                    swap(a[i], a[j]);
                }
            }
        }
        for(auto x : a){
            cout  << x << " ";
        }
        cout << nl;
    }
    
    return 0;
}