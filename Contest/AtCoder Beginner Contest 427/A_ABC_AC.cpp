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
    int mid = (int)s.size() / 2;
    s.erase(mid, 1);
    cout << s;
    
    return 0;
}