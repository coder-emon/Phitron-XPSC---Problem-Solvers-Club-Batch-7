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
        int c01 = 0, c10=0;
        for(int i = 0; i < n-1; i++){
            if(s[i] == '0' && s[i+1] == '1') c01++;
            if(s[i] == '1' && s[i+1] == '0') c10++;
        }
        if(c01 + c10 >= 2)
            cout << "Alice" << nl;
        else
            cout << "Bob" << nl;
    }
    
    return 0;
}