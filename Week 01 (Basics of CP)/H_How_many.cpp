//https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll s,t;
    cin >> s >> t;
    int cnt = 0;
    for(ll a = 0; a <= 100; a++){
        for(ll b = 0; b <= 100; b++){
            for(ll c = 0; c <= 100; c++){
                if(a + b + c <= s && a * b * c <= t)
                    cnt++;
                else
                    break;
            }
        }
    }

    cout << cnt;
    
    return 0;
}