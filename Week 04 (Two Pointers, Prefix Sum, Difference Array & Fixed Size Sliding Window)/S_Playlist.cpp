#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int ans = 0;
    map<int,int> last_index;
    for(int i = 1, j = 1; j <= n; j++){
        int x;
        cin >> x;

        i = max(i, last_index[x] + 1);
        last_index[x] = j;
        
        ans = max(ans, j - i + 1);
    }
    cout << ans;
    
    return 0;
}