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
    map<string,int> mp;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(mp[s] == 0){
            cout << "OK" << nl;
        }else{
            cout << s << mp[s] << nl;
        }
        mp[s]++;
    }
    
    return 0;
}