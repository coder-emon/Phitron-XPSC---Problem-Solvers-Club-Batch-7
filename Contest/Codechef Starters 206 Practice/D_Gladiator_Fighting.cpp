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
        int min = n -2;
        int max = ((n-1)*(n-2))/2;
        cout << min << " " << max << nl;
    }    
    return 0;
}