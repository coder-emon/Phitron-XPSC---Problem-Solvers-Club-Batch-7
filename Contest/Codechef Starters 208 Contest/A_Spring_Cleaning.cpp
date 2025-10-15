#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    cin >> x >> y;
    int res = (x * 30) + (y * 60);
    cout << res;
    
    return 0;
}