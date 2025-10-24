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
    set<string> reads;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(reads.find(s) == reads.end()){
            cout << "NO" << nl;
        }else{
            cout << "YES" << nl;
        }
        reads.insert(s);
    }
    
    return 0;
}