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
        int one = 0;
        int length = 0, maxlength = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                one++;
                length++;
                maxlength = max(maxlength,length);
            }else{
                length = 0;
            }
        }
        if(one == 2 && maxlength == 2)
            cout << "No" << nl;
        else if(one == 3 && maxlength == 3)
            cout << "No" << nl;
        else
            cout << "Yes" << nl;
    }
    
    return 0;
}