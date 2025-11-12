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
    vector<priority_queue<int>> queues(n);

    while(q--){
        int type, t, val;
        cin >> type >> t;
        if(type == 0){
            cin >> val;
            queues[t].push(val);
        }else if(type == 1){
            if(!queues[t].empty()){
                cout << queues[t].top() << nl;
            }
        }else{
            if(!queues[t].empty())
                queues[t].pop();
        }
    }
    
    return 0;
}