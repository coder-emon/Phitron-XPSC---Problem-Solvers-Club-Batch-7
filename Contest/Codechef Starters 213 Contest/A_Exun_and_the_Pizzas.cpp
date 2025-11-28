#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, r;
    cin >> n >> k >> r;
    int res = (n - k) * r;
    cout << res;
    
    return 0;
}