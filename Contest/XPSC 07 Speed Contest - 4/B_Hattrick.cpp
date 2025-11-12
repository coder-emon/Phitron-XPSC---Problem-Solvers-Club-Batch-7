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
    cin.ignore();
    while(tc--){
        string s;
        getline(cin , s);
        stringstream ss(s);
        char c;
        int length = 0, maxLength = 0;
        while(ss >> c){
            if(c == 'W'){
                length++;
                maxLength = max(length,maxLength);
            }else{
                length = 0;
            }
        }
        if(maxLength >= 3)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    
    return 0;
}