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
    sort(s.begin(),s.end());
    vector<string> ans;
    ans.push_back(s);

    while(next_permutation(s.begin(),s.end()))
        ans.push_back(s);

    cout << ans.size() << nl;
    for(auto p : ans)
        cout << p << nl;
    
    return 0;
}