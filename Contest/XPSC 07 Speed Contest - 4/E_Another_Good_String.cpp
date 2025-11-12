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
        int n,q;
        cin >> n >> q;
        string s;
        cin >> s;
        int length = 1, maxlength = 1;
        char lastChar = s[0];
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1]){
                length++;
                maxlength = max(length,maxlength);
                lastChar = s[i];
            }else{
                length = 1;
            }
        }
        
        cout << maxlength << " ";
        if(length == 1)
            lastChar = s[n-1];
        while(q--){
            char c;
            cin >> c;
            if(lastChar == c){                                                                                                  
                length++;
                maxlength = max(length,maxlength);
            }else{
                length = 1;
            }
            lastChar = c;
            cout << maxlength << " ";
        }
        cout << nl;
    }

    return 0;
}