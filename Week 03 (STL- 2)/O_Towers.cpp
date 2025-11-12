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
    multiset<int> s;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        auto it = s.upper_bound(x);
        if(it != s.end()){
            s.erase(it);
        }
        s.insert(x);
    }
    cout << s.size() << nl;
    
    return 0;
}