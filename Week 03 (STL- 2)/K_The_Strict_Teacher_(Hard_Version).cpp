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
        int n,m,q;
        cin >> n >> m >> q;
        vector<int> a(m);
        for(auto &x : a)
            cin >> x;
        sort(a.begin(),a.end());
        for(int i = 0; i < q; i++){
            int s;
            cin >> s;
            auto it = upper_bound(a.begin(), a.end(),s);
            if(it == a.end()){
                it--;
                cout << n - *it << nl; 
            }else if(it == a.begin()){
                cout << *it - 1 << nl;
            }else{
                int porer_teacher = *it;
                it--;
                int ager_teacher = *it;
                int len = porer_teacher - ager_teacher - 1;
                cout << (len + 1) / 2 << nl;
            }
        }
    }
    
    return 0;
}