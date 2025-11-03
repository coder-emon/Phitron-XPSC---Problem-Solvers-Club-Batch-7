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
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char,int> mp;
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
        }
        if(min(mp['0'], mp['1']) % 2 == 1){
            cout << "Zlatan" << nl;
        }else{
            cout << "Ramos" << nl;
        }
    }
    
    return 0;
}