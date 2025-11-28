#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int tc;
    // cin >> tc;
    // while(tc--){
    //     int n,x;
    //     cin >> n >> x;

    //     int gtx = 0, ltx = 0, eex = 0;
    //     for(int i = 0; i < n; i++){
    //         int num;
    //         cin >> num;
    //         if(num > x) gtx++;
    //         else if(num < x) ltx++;
    //         else eex++;
    //     }

    //     if(gtx > 0 && ltx > 0 && eex == 0)
    //         cout << "No" << nl;
    //     else
    //         cout << "Yes" << nl;
    // }


    int tc;
    cin >> tc;
    while(tc--){
        int n,x;
        cin >> n >> x;
        vector<int> a(n);
        for(auto &p : a) cin >> p;
        sort(a.begin(),a.end());
        
        bool ok = true;
        for(int i = 0; i < n; i++){
            if(a[i] < x && a[i+1] > x){
                ok = false;
                break;
            }
        }

        if(ok)cout << "Yes" << nl;
        else cout << "No" << nl;
    }
    
    return 0;
}