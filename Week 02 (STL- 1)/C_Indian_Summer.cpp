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
    map<pair<string,string>,bool> mp;
    for(int i = 0; i < n; i++){
        string a,b;
        cin >> a >> b;
        mp[{a,b}] = true;
    }

    // for(auto val : mp){
    //     cout << val.first.first << " " << val.first.second << " " << val.second << nl;
    // }

    cout << mp.size() << nl;
    
    return 0;
}