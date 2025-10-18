#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        string s;
        cin >> s;
        vector<pair<int,char>> upper;
        vector<pair<int,char>> lower;
        for(int i = 0; i < s.size(); i++){
            if(isupper(s[i]) && s[i] != 'B')
                upper.push_back({i,s[i]});
            else if(islower(s[i]) && s[i] != 'b')
                lower.push_back({i,s[i]});
            else if(s[i] == 'B' && !upper.empty())
                upper.pop_back();
            else if(s[i] == 'b' && !lower.empty())
                lower.pop_back();
        }
        vector<pair<int,char>> ans(upper);
        ans.insert(ans.end(), lower.begin(),lower.end());
        sort(ans.begin(),ans.end());
        for(auto val : ans){
            cout << val.second;
        }
        cout << nl;
    }
    
    return 0;
}