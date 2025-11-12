#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin >> n >> q;
    multiset<int> ms;
    for(int i = 0; i < n; i++){
        int s;
        cin >> s;
        ms.insert(s);
    }

    while(q--){
        int type,val;
        cin >> type ;
        if(type == 0){
            cin >> val;
            ms.insert(val);
        }
        else if(type == 1){
            cout << *ms.begin() << nl;
            ms.erase(ms.begin());
        }else{
            cout << *ms.rbegin() << nl;
            ms.erase(--ms.end());
        }
    }
    
    return 0;
}