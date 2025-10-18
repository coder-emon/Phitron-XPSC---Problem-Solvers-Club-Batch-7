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
        map<string,vector<int>> mp;
        for(int i = 1; i <= 3; i++){
            for(int j = 0; j < n; j++){
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }
        // int one = 0, two = 0,three = 0;
        // for(auto val : mp){
        //     if(val.second.size() != 3){
        //         if(val.second.size() == 2){
        //             for(auto x : val.second){
        //                 if(x == 1)
        //                     one++;
        //                 else if (x == 2)
        //                     two++;
        //                 else
        //                     three++;
        //             }
        //         }else{
        //             int x = val.second[0];
        //             if(x == 1)
        //                     one+=3;
        //             else if (x == 2)
        //                 two+=3;
        //             else
        //                 three+=3;
        //         }
        //     }
        // }

        // cout << one << " " << two << " " << three << nl;

        vector<int> ans(4);
        for(auto [key,val] : mp){
            if(val.size() == 1){
                ans[val[0]] += 3;
            }else if(val.size() == 2){
                ans[val[0]]++;
                ans[val[1]]++;
            }
        }

        cout << ans[1] << " " << ans[2] << " " << ans[3] << nl;
    }
    
    return 0;
}