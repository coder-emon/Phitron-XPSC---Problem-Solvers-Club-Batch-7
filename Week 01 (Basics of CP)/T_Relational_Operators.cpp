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
        int a,b;
        cin >> a >> b;
        if(a > b){
            cout << ">" << nl;
        }else if(a < b){
            cout << "<" << nl;
        }else {
            cout << "=" << nl;
        }
    }
    
    return 0;
}