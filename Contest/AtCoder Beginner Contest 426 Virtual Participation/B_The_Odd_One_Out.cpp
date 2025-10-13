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
    map<char, int> mp;
    for(int i = 0; i < (int)s.size(); i++){
        mp[s[i]]++;
    }

    for(int i = 0; i < (int)s.size(); i++){
        if(mp[s[i]] == 1){
            cout << s[i];
            break;
        }
    }

    
    return 0;
}