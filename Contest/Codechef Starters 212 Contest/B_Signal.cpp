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
        int pulse = 0;
        bool foundSilence = false;
        for(int i = 0; i < n; i++){
            if(foundSilence && s[i] == '1')
                pulse++;
            if(s[i] == '0')
                foundSilence = true;
        }
        cout << pulse << nl;
    }
    
    return 0;
}