//https://open.kattis.com/problems/qaly

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
    float QALY = 0;
    for(int i = 0; i < n; i++){
        float q,y;
        cin >> q >> y;
        float mul = q * y;
        QALY += mul;
    }
    cout << fixed << setprecision(3) << QALY;
    
    return 0;
}