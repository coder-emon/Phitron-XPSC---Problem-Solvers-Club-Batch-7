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
        deque<int> dq;

        int x; 
        cin >> x;
        dq.push_back(x);
        for(int i = 1; i < n; i++){
            cin >> x;
            if( x < dq.front())
                dq.push_front(x);
            else
                dq.push_back(x);
        }

        for(auto x : dq) cout << x << " ";
        cout << nl;
    }
    
    return 0;
}