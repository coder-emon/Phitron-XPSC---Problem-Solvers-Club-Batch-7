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
    map<char,int> mp;
    for(int i = 0; i < s.size(); i++)
        mp[s[i]]++;

    int odd_fre = 0;
    char ch;
    string ans;

    for(auto [c,f] : mp){
        if(f % 2 == 1){
            odd_fre++;
            ch = c;
        }else{
            
        }
        for(int i = 1; i <= f / 2; i++){
            ans.push_back(c);
        }
    }

    if(odd_fre == 0){
        cout << ans ;
        reverse(ans.begin(),ans.end());
        cout << ans;
    }else if(odd_fre == 1){
        cout << ans << ch;
        reverse(ans.begin(),ans.end());
        cout << ans;
    }else{
        cout << "NO SOLUTION";
    }
    
    return 0;
}