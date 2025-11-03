#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q, customerNo = 1;
    cin >> q;
    set<pair<int,int>> s;
    multiset<pair<int,int>> ms;
    vector<int> ans;
    for(int i = 1; i <= q; i++){
        int type;
        cin >> type;
        if(type == 1){
            int money;
            cin >> money;
            s.insert({customerNo, money});
            ms.insert({money,-customerNo});
            customerNo++;
        }else if(type == 2){
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            // s.erase(s.begin());
            s.erase({pos,money});
            ms.erase({money,-pos});
        }else if(type == 3){
            int pos = ms.rbegin()->second, money = ms.rbegin()->first;
            ans.push_back(-pos);
            s.erase({-pos, money});
            ms.erase({money, pos});
            // ms.erase(--s.end());
        }
    }

    for(auto x : ans){
        cout << x << " ";
    }
    
    return 0;
}