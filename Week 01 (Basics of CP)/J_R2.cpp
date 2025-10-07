//https://open.kattis.com/problems/r2

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r1, s;
    cin >> r1 >> s;
    int r2 = (s * 2) - r1;
    cout << r2;
    return 0;
}