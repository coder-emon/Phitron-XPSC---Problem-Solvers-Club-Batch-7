#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    set<int> s;
    while(q--){
        int type, val;
        cin >> type >> val;
        if(type == 1)
            s.insert(val);
        else if(type == 2){
            auto it = s.find(val);
            if(it != s.end()){
                s.erase(it);
            }
        }else if(type == 3){
            auto it = s.find(val);

            if(it != s.end())
                cout << "Yes" << nl;
            else
                cout << "No" << nl;
        }
    }
    
    return 0;
}