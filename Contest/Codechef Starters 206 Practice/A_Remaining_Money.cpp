#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b;
    cin >> n >> a >> b;
    int rem = n - (a*b);
    cout << rem;
    
    return 0;
}