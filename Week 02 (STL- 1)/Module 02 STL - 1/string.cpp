#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    cout << s << nl;

    // string is a characater array

    // for(int i = 0; i < s.size(); i++){
    //     cout << s[i];
    // }

    string t = s.substr(3, 6);
    cout << t << nl;
    return 0;
}