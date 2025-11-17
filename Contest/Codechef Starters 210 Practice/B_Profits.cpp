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
        int n,x;
        cin >> n >> x;
        int sales = 0;
        int costs = 0;
        for(int i = n; i >= 1; i--){
            if(i >= x){
                sales += i;
                costs += x;
            }
        }
        int res = sales - costs;
        cout << res << nl; 
    }
    
    return 0;
}